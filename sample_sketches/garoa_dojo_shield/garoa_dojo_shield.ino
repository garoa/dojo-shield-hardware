/*
  Example sketch for Garoa Dojo Shield
  Código de exemplo para o Dojo Shield do Garoa Hacker Clube

  (c) 2016 Garoa Hacker Clube

  Authors:
   - Marcelo Rodrigues
   - Luciano Ramalho

  Licensed under GNU GPL v2 (or later)
*/

void setup()
{
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(6,OUTPUT);
  
  for(int i=6;i<=13;i++)
  {
  digitalWrite(i, LOW);
  delay(500);
  }
}

void loop()
{
int ldr = analogRead(A1);
Serial.print("LDR= ");
Serial.println(ldr);
delay(500);

int pot = analogRead(A0);
Serial.print("Pot= ");
Serial.println(pot);
delay(500);

Serial.println();
Serial.println();
}
