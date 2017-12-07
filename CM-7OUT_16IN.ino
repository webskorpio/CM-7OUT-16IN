// MRL-7/16 Модуль управления освещением на 7 каналов управления и 16 каналов контроля типа "сухой контакт" / кнопка / выключатель.
// Auhtor Telegin V.S. (Web.SkoRpiO) 26.04.2017

//Настройки подключения 74HC595 (Реле)

#include <Shift595.h>

#define   dataPin           4      // pin 14 on the 74HC595
#define   latchPin          3      // pin 12 on the 74HC595
#define   clockPin          5      // pin 11 on the 74HC595

#define   numOfRegisters    1      // number of shift registers present

Shift595 Shifter(dataPin, latchPin, clockPin, numOfRegisters);

int u = 0;

byte relay = 0;

void setup() {

  for(int i = 0; i< 8; i++){
  Shifter.setRegisterPin(i, LOW);
  }
  pinMode(8, OUTPUT);

  digitalWrite(8, LOW);


  
}
 
void loop() {

  if(u == 0){
  Shifter.setRegisterPin(0, HIGH);
  delay(1000);
  Shifter.setRegisterPin(1, HIGH);
  delay(1000);
  Shifter.setRegisterPin(2, HIGH);
  delay(1000);
  Shifter.setRegisterPin(3, HIGH); 
  delay(1000);
  Shifter.setRegisterPin(4, HIGH);
  delay(1000);
  Shifter.setRegisterPin(5, HIGH);
  delay(1000);
  Shifter.setRegisterPin(6, HIGH);
  delay(1000);
  Shifter.setRegisterPin(7, HIGH);
  }
  
  u = 1;
}
