

#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11); //TX, RX respetively
String readvoice;

void setup() {
 BT.begin(9600);
 Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

}
//-----------------------------------------------------------------------// 
void loop() {
  while (BT.available()){  //Check if there is an available byte to read
  delay(10); //Delay added to make thing stable
  char c = BT.read(); //Conduct a serial read
  readvoice += c; //build the string- "forward", "reverse", "left" and "right"
  }
  
  
  
  if (readvoice.length() > 0) {
    Serial.println(readvoice);

  if ( readvoice == "right" || readvoice == "done" || readvoice == "daane")
 {
   digitalWrite(4, LOW);
   digitalWrite(3, HIGH);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   delay(800);
      digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    //delay(100);
 }
 
  else if (readvoice == "back" || readvoice == "backward" || readvoice == "piche" )
  { 
    
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6,HIGH);
    
  }
  else if (readvoice == "left" || readvoice == "bye" || readvoice == "bhai" )
  { 
    digitalWrite(4,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
   delay(800);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    //delay(100);
  
  }

  else if (readvoice == "forward" || readvoice == "samne" || readvoice == "go straight")
  {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(100);
  }
  
  else if (readvoice == "U turn" )
  { 
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
   delay(1600);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    //delay(100);
  
  }

  else if (readvoice == "right U turn" )
  { 
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
   delay(1600);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    //delay(100);
  
  }
  else if (readvoice == "left U turn" ||  readvoice == "let U turn" )
  { 
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
   delay(1600);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    //delay(100);
  
  }

 else if (readvoice == "stop")
 {
   digitalWrite(3, LOW);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   delay(100);
 }
 
 else if (readvoice == "keep watch in all direction")
 {
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   delay(100);
 }
  else if (readvoice == "show me Garba")
 {
 digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   delay(400);
      digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, HIGH);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, HIGH);
   delay(500);

digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   delay(400);
      digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, HIGH);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, HIGH);
   delay(500);
   digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   delay(400);
      digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, HIGH);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, HIGH);
   delay(500);
   digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   delay(400);
      digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, HIGH);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, HIGH);
   delay(500);
   digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   delay(400);
      digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, HIGH);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, HIGH);
   delay(500);
   digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   delay(400);
      digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, HIGH);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, HIGH);
   delay(500);
   digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   delay(400);
      digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, HIGH);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, HIGH);
   delay(500);
   digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, LOW);
   digitalWrite(6, LOW);
   delay(400);
      digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    delay(600);
    digitalWrite(3, LOW);
   digitalWrite(4, HIGH);
   digitalWrite(5, HIGH);
   digitalWrite(6, LOW);
   delay(500);
   digitalWrite(3, HIGH);
   digitalWrite(4, LOW);
   digitalWrite(5, LOW);
   digitalWrite(6, HIGH);
   delay(500);
 }


 readvoice="";}} //Reset the variable


