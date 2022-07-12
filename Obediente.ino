//projeto Roberto, o andarilho

//variaveis do motor 1
const int in1 = 10;
const int in2 = 11;
const int ena = 9;

//variaveis do motor 2
const int in3 = 12;
const int in4 = 13;
const int enb = 8;

//variaveis dos sensores
const int s1 = 52;
const int s2 = 51;
const int s3 = 53;

int Speed = 120;
int curveSpeed = 255;
int backSpeed = 255;

//metodos principais
void setup(){
  //entradas dos pinos motores
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(ena, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(enb, OUTPUT);

  pinMode(s1, INPUT);
  pinMode(s2, INPUT);
  pinMode(s3, INPUT);

  Serial.begin(9600);

  playMotorDir(HIGH, LOW, 255);
  playMotorEsq(HIGH, LOW, 255);
}
void loop(){
  bool s1Res = digitalRead(s1);
  bool s2Res = digitalRead(s2);
  bool s3Res = digitalRead(s3);

  if(s1Res == s3Res){
    Serial.println("frente");
    playMotorDir(HIGH, LOW, Speed);
    playMotorEsq(HIGH, LOW, Speed);
  }else{
    if(s1Res){
      Serial.println("esquerda");
      playMotorDir(HIGH, LOW, curveSpeed);
      playMotorEsq(LOW, HIGH, backSpeed);
    }else{
      Serial.println("direita");
      playMotorDir(LOW, HIGH, backSpeed);
      playMotorEsq(HIGH, LOW, curveSpeed);
    }
  }
  delay(2);
}
void playMotorDir(int force1, int force2, int velo){
  digitalWrite(in1, force1);
  digitalWrite(in2, force2);
  analogWrite(ena, velo);
}
void playMotorEsq(int force1, int force2, int velo){
  digitalWrite(in3, force1);
  digitalWrite(in4, force2);
  analogWrite(enb, velo); 
}
