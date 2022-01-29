//https://www.google.com/fbx?fbx=snake_arcade
#include "Keyboard.h" // Lib que permite o controle de um teclado

// Configuração dos pinos
#define pinoTon1 A0
#define pinoTon2 A1
#define pinoTon3 A2
#define pinoPrato1 A3
#define pinoPrato2 A10

// Configuração das teclas usadas no jogo
// Padrão Guitar Hero: A, S, J, K, L
#define tecla1 KEY_LEFT_ARROW
#define tecla2 KEY_DOWN_ARROW
#define tecla3 KEY_RIGHT_ARROW
#define tecla4 KEY_UP_ARROW
#define tecla5 KEY_UP_ARROW

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
      Keyboard.press(tecla1);
      Keyboard.releaseAll();
    }

    if(leituraTon2){
      Keyboard.press(tecla2);
      Keyboard.releaseAll();
    }

    if(leituraTon3){
      Keyboard.press(tecla3);
      Keyboard.releaseAll();
    }

    if(leituraPrato1){
      Keyboard.press(tecla4);
      Keyboard.releaseAll();
    }

    if(leituraPrato2){
      Keyboard.press(tecla5);
      Keyboard.releaseAll();
    }

}
