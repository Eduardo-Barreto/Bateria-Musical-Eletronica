#define pinoTon1 A0

int leituraTon1 = 0;
int sens = 1000;

void setup() {

    Serial.begin(9600);
    pinMode(pinoTon1, INPUT_PULLUP);

}

void loop() {
        leituraTon1 = analogRead(pinoTon1);

        if(leituraTon1 <= sens){
            Serial.println(leituraTon1);
        }

}
