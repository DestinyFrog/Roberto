// Projeto: Roberto, o andarilho obediente

// pinos do motor 1 (direita)
const int in1 = 10;
const int in2 = 11;
const int ena = 9;

// pinos do motor 2 (esquerda)
const int in3 = 12;
const int in4 = 13;
const int enb = 8;

//pinos dos sensores de luminosidade
const int s1 = 52;  // Direita
const int s2 = 53;  // Esquerda

//velocidades
int Speed           = 190; //velocidade para padrao
int BackSpeed       = 250; //velocidade para tras

void setup(){
    Serial.begin(9600);

    //entradas dos pinos dos motores
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
    pinMode(ena, OUTPUT);
    pinMode(enb, OUTPUT);
    
    //entrada dos pinos dos sensores
    pinMode(s1, INPUT);
    pinMode(s2, INPUT);
}
void loop(){
     //resposta dos sensores de luminosidade em variavel bool
     bool s1Res = digitalRead(s1);
     bool s2Res = digitalRead(s1);

     if(s1Res == s2Res){
        moveDirMotor(LOW, HIGH, Speed);
        moveEsqMotor(LOW, HIGH, Speed);
     }else{
        if(s1Res){
            moveDirMotor(LOW, HIGH, Speed);
            moveEsqMotor(HIGH, LOW, BackSpeed);
        }else{
            moveDirMotor(HIGH, LOW, BackSpeed);
            moveEsqMotor(LOW, HIGH, Speed);
        }
     }
}


//métodos criados
void moveDirMotor(int power1, int power2, int spd){
     digitalWrite(in1, power1);
     digitalWrite(in2, power2);
     analogWrite(ena, spd);
}
void moveEsqMotor(int power1, int power2, int spd){
     digitalWrite(in3, power1);
     digitalWrite(in4, power2);
     analogWrite(enb, spd);
};
