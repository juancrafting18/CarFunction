#include <L298N.h>
int IN1 = 3;
int IN2 = 4;
int ENA = 5;
int IN3 = 8;
int IN4 = 7;
int ENB = 6;
void setup() {
 
 pinMode (3, OUTPUT);
 pinMode (4, OUTPUT);
 pinMode (5, OUTPUT);
 pinMode (8, OUTPUT);
 pinMode (7, OUTPUT);
 pinMode (6, OUTPUT);
}

void loop() {
  analogWrite(ENA, 150);
  digitalWrite(IN1, 1);  //ESTA FUNCION ES ADELANTE MOTOR A
  digitalWrite(IN2, 0);
  analogWrite(ENB, 1);
  digitalWrite(IN3, 0);  //ESTA FUNCION ES ADELANTE MOTOR B
  digitalWrite(IN4, 1);
   
  delay(2000);

  analogWrite(ENA, 150);
  digitalWrite(IN1, 1);  
  digitalWrite(IN2, 0);
  analogWrite(ENB, 1);
  digitalWrite(IN3, 0);  
  digitalWrite(IN4, 0); 
  delay(1000); 
}
