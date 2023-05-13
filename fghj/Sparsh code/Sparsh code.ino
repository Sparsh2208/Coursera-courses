#include <Servo.h>

Servo myservo;  
int pos = 0; 
void setup() {
  myservo.attach(9);
 
  // put your setup code here, to run once:
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
   pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(3,HIGH);
    digitalWrite(8,LOW);
    digitalWrite(7,LOW);
    digitalWrite(4,LOW);
    delay(10);
    digitalWrite(4,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    delay(2270);
    digitalWrite(4,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    digitalWrite(3,LOW);
  
  

    for (pos = 0; pos <= 35; pos +=1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);  
    delay(15);            // tell servo to go to position in variable 'pos'
                        // waits 15ms for the servo to reach the position
  }
  for (pos = 35; pos >= 0; pos -=1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);  
   
               // tell servo to go to position in variable 'pos'
                          // waits 15ms for the servo to reach the position
  }

    delay(20);

    
    
   

}

