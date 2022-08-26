// whatch the tutorial in https://www.youtube.com/watch?v=XGaLxknwF3A

#include <LiquidCrystal.h>

LiquidCrystal lcd(7,8,9,10,11,12);

int button1 = 1; 
int button2 = 2; 
int LED1 = 3; //input LED-1 for button-1
int LED2 = 4; //input LED-2 for button-2
int LEDOUT = 5;
int button3 = 6;
bool A;
bool B;
bool but3;
int x = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(button1,INPUT_PULLUP);
pinMode(button2,INPUT_PULLUP);
pinMode(button3,INPUT_PULLUP);
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
pinMode(LEDOUT,OUTPUT);
lcd.begin(16,2);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("ADDEROS");
delay(1000);
lcd.setCursor(0,1);
lcd.print("Logic gates");
}

void loop() {
  // put your main code here, to run repeatedly:
A = !digitalRead(button1);
B = !digitalRead(button2);
but3 = !digitalRead(button3);
if (A==1){digitalWrite(LED1,HIGH);}
else {digitalWrite(LED1,LOW);}
if (B==1 && x != 13){digitalWrite(LED2,HIGH);}
else {digitalWrite(LED2,LOW);}
if(but3==1){
  x=x+1;
  delay(300);
}
if(x==0){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("AND Gate");
  x=x+1;}
 else if (x==1){
  if(A&B==1){digitalWrite(LEDOUT,HIGH);}
  else{ digitalWrite(LEDOUT,LOW);}}
else if(x==2){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("OR Gate");
  x=x+1;}
else if(x==3){
  if((A|B)==1){digitalWrite(LEDOUT,HIGH);}
  else {digitalWrite(LEDOUT,LOW);}
}
else if(x==4){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("NAND Gate");
  x=x+1;}
else if(x==5){
  if(!(A&B)==1){digitalWrite(LEDOUT,HIGH);}
  else {digitalWrite(LEDOUT,LOW);}
}
else if(x==6){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("NOR Gate");
  x=x+1;}
else if(x==7){
  if(!(A|B)==1){digitalWrite(LEDOUT,HIGH);}
  else {digitalWrite(LEDOUT,LOW);}
}
else if(x==8){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("XOR Gate");
  x=x+1;}
else if(x==9){
  if((A^B)==1){digitalWrite(LEDOUT,HIGH);}
  else {digitalWrite(LEDOUT,LOW);}
}
else if(x==10){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("XNOR Gate");
  x=x+1;}
else if(x==11){
  if(!(A^B)==1){digitalWrite(LEDOUT,HIGH);}
  else {digitalWrite(LEDOUT,LOW);}
}
else if(x==12){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("NOT");
  lcd.setCursor(0,1);
  lcd.print("first but only!");
  x=x+1;}
else if(x==13){
  if((!A)==1){digitalWrite(LEDOUT,HIGH);}
  else {digitalWrite(LEDOUT,LOW);}
  
}
else{
  x=0;
  }
}
