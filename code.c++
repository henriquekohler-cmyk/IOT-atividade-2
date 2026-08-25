#include <Servo.h>

Servo meuServo;

const int pinoPot = A0;
const int pinoServo = 9;

void setup() {
  meuServo.attach(pinoServo);
}

void loop() {
  int valorPot = analogRead(pinoPot);
  
  // Inverte a escala de mapeamento de (0 -> 1023) para (180 -> 0)
  int anguloServo = map(valorPot, 0, 1023, 180, 0);
  
  meuServo.write(anguloServo);
  delay(15);
}
