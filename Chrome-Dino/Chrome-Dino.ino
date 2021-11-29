#include "Keyboard.h" // Lib que permite o controle de um teclado

// Configuração dos pinos
#define pinoTon1 A0
#define pinoTon3 A2

// Configuração das teclas usadas no jogo
// Padrão Guitar Hero: A, S, J, K, L
#define tecla1 ' '
#define tecla2 (char)(KEY_DOWN_ARROW)

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
bool flagTon3 = false;

void setup() {
    // Inicialização do teclado
    Keyboard.begin();

    // Todos os piezos são ligados com o resistor interno do arduino e configurados como entrada
    pinMode(pinoTon1, INPUT_PULLUP);
    pinMode(pinoTon3, INPUT_PULLUP);

}

void loop() {
    // Leitura dos valores dos pinos: é verdadeiro se estiver abaixo da sensibilidade
    leituraTon1 = analogRead(pinoTon1) <= sens;
    leituraTon3 = analogRead(pinoTon3) <= sens;

    if(leituraTon1){
      Keyboard.releaseAll();
      Keyboard.press(tecla1);
    }
    if(leituraTon3){
      Keyboard.releaseAll();
      Keyboard.press(tecla2);
    }

}
