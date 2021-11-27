#define pinoTon1 A0
#define pinoTon2 A1
#define pinoTon3 A2
#define pinoPrato1 A3
#define pinoPrato2 A10

int leituraTon1 = 0;
int leituraTon2 = 0;
int leituraTon3 = 0;
int leituraPrato1 = 0;
int leituraPrato2 = 0;
int sens = 1000;



void setup() {

    Serial.begin(9600);
    pinMode(pinoTon1, INPUT_PULLUP);
    pinMode(pinoTon2, INPUT_PULLUP);
    pinMode(pinoTon3, INPUT_PULLUP);
    pinMode(pinoPrato1, INPUT_PULLUP);
    pinMode(pinoPrato2, INPUT_PULLUP);

}

void loop() {
        leituraTon1 = analogRead(pinoTon1);
        leituraTon2 = analogRead(pinoTon2);
        leituraTon3 = analogRead(pinoTon3);
        leituraPrato1 = analogRead(pinoPrato1);
        leituraPrato2 = analogRead(pinoPrato2);

        if(leituraTon1 <= sens){
            Serial.println(leituraTon1);
        }

        if(leituraTon2 <= sens){
            Serial.println(leituraTon2);
        }

        if(leituraTon3 <= sens){
            Serial.println(leituraTon3);
        }

        if(leituraPrato1 <= sens){
            Serial.println(leituraPrato1);
        }

        if(leituraPrato2 <= sens){
            Serial.println(leituraPrato2);
        }

}
