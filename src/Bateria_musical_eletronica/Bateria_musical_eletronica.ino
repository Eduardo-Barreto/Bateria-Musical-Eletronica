// https://www.musicca.com/drums
#include "Keyboard.h" // Lib que permite o controle de um teclado

// Configuração dos pinos
#define pinoTon1 A0
#define pinoTon2 A1
#define pinoTon3 A2
#define pinoPrato1 A3
#define pinoPrato2 A10

// Configuração das teclas usadas no jogo
// Padrão Guitar Hero: A, S, J, K, L
#define tecla1 'S'
#define tecla2 'H'
#define tecla3 'J'
#define tecla4 'Y'
#define tecla5 'U'

// Variáveis que indicam o estado de cada piezo
bool leituraTon1 = 0;
bool leituraTon2 = 0;
bool leituraTon3 = 0;
bool leituraPrato1 = 0;
bool leituraPrato2 = 0;

// Sensibilidade do sensor (valor de corte/threshold), qualquer valor abaixo disso é considerado
int sens = 1000;

// Variáveis de controle de repetição e "tempo" de cada batida
bool flagTon1 = false;
bool flagTon2 = false;
bool flagTon3 = false;
bool flagPrato1 = false;
bool flagPrato2 = false;



void setup() {
    // Inicialização do teclado
    Keyboard.begin();

    // Todos os piezos são ligados com o resistor interno do arduino e configurados como entrada
    pinMode(pinoTon1, INPUT_PULLUP);
    pinMode(pinoTon2, INPUT_PULLUP);
    pinMode(pinoTon3, INPUT_PULLUP);
    pinMode(pinoPrato1, INPUT_PULLUP);
    pinMode(pinoPrato2, INPUT_PULLUP);

}

void loop() {
    // Leitura dos valores dos pinos: é verdadeiro se estiver abaixo da sensibilidade
    leituraTon1 = analogRead(pinoTon1) <= sens;
    leituraTon2 = analogRead(pinoTon2) <= sens;
    leituraTon3 = analogRead(pinoTon3) <= sens;
    leituraPrato1 = analogRead(pinoPrato1) <= sens;
    leituraPrato2 = analogRead(pinoPrato2) <= sens;

    // Se o piezo está apertado
    if(leituraTon1){
        // Se flag de repetição estiver falsa
        if(!flagTon1){
            // A tecla relacionada aquele piezo é pressionada
            Keyboard.press(tecla1);
            // Flag de repetição é ativada
            flagTon1 = true;
        }
    }
    // Se o piezo não está apertado e a flag de controle estiver verdadeira
    else if (flagTon1 && !leituraTon1){
        // A tecla relacionada aquele piezo é solta
        Keyboard.release(tecla1);
        // Flag de repetição é desativada
        flagTon1 = false;
    }

    /*---A mesma estrutura se repete para cada piezo---*/
    if(leituraTon2){
        if(!flagTon2){
            Keyboard.press(tecla2);
            flagTon2 = true;
        }
    }
    else if (flagTon2 && !leituraTon2){
        Keyboard.release(tecla2);
        flagTon2 = false;
    }

    if(leituraTon3){
        if(!flagTon3){
            Keyboard.press(tecla3);
            flagTon3 = true;
        }
    }
    else if (flagTon3 && !leituraTon3){
        Keyboard.release(tecla3);
        flagTon3 = false;
    }


    if(leituraPrato1){
        if(!flagPrato1){
            Keyboard.press(tecla4);
            flagPrato1 = true;
        }
    }
    else if (flagPrato1 && !leituraPrato1){
        Keyboard.release(tecla4);
        flagPrato1 = false;
    }


    if(leituraPrato2){
        if(!flagPrato2){
            Keyboard.press(tecla5);
            flagPrato2 = true;
        }
    }
    else if (flagPrato2 && !leituraPrato2){
        Keyboard.release(tecla5);
        flagPrato2 = false;
    }

}
