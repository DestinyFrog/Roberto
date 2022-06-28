//Projeto: Roberto, o andarilho obediente

//pinos do motor 1 (direita)
const int IN1 = 10;
const int IN2 = 11;
const int ENA = 9; 

//pinos do motor 2 (esquerda)
const int IN3 = 12;
const int IN4 = 13;
const int ENB = 8; 

//pinos dos sensores
const int Sdir = 52;
const int Scen = 50;
const int Sesq = 48;
// 0 = false = preto
// 1 = true = branco 

int speed = 195; 

//metodos padrao
void setup(){
     Serial.begin(9600);
    
     //setando o pino dos motores
     pinMode(IN1, OUTPUT);
     pinMode(IN2, OUTPUT);
     pinMode(ENA, OUTPUT);
     pinMode(IN3, OUTPUT);
     pinMode(IN4, OUTPUT);
     pinMode(ENB, OUTPUT); 

     //setando o pino dos sensores
     pinMode(Sdir, INPUT);
     pinMode(Scen, INPUT);
     pinMode(Sesq, INPUT);
}
void loop(){
     //resposta dos sensores de luminosidade em variavel bool
     bool ResSdir = digitalRead(Sdir);
     bool ResScen = digitalRead(Scen);
     bool ResSesq = digitalRead(Sesq); 

     
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