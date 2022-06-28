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
     bool
     bool

     
}


//métodos criados
void moveDirMotor(int power1, int power2, int spd){
     digitalWrite(IN1, power1);
     digitalWrite(IN2, power2);
     analogWrite(ENA, spd);
}
void moveEsqMotor(int power1, int power2, int spd){
     digitalWrite(IN3, power1);
     digitalWrite(IN4, power2);
     analogWrite(ENB, spd);
};
