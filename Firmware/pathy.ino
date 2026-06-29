#define BUT1 D0
#define BUT2 D1
#define BUT3 D2
#define BUT4 D8
#define BUT5 D9


#define LED1 D3
#define LED2 D4
#define LED3 D5
#define LED4 D6
#define LED5 D7

void setup() {
pinMode(BUT1, INPUT_PULLUP);
pinMode(BUT2, INPUT_PULLUP);
pinMode(BUT3, INPUT_PULLUP);
pinMode(BUT4, INPUT_PULLUP);
pinMode(BUT5, INPUT_PULLUP);


pinMode(LED1, OUTPUT);
pinMode(LED2, OUTPUT);
pinMode(LED3, OUTPUT);
pinMode(LED4, OUTPUT);
pinMode(LED5, OUTPUT);

}

void loop() {
  //small dash
 if (digitalRead(BUT1) == LOW) {
 digitalWrite(LED1, HIGH);
 delay(500);
 digitalWrite(LED1, LOW);
 delay(1000);
 }
 // long dash
 if
 (digitalRead(BUT2) == LOW) {
 digitalWrite(LED2, HIGH);
 delay(1000);
 digitalWrite(LED2, LOW);
 delay(1000);
 }
 //s
 if 
  (digitalRead(BUT3) == LOW) {
 digitalWrite(LED3, HIGH);
 delay(500);
 digitalWrite(LED3, LOW);
 delay(500);
 digitalWrite(LED3, HIGH);
delay(500);
digitalWrite(LED3, LOW);
delay(500);
digitalWrite(LED3, HIGH);
 delay(500);
 digitalWrite(LED3, LOW);
 delay(500);
 //o
 digitalWrite(LED3, HIGH);
 delay(1000);
 digitalWrite(LED3, LOW);
 delay(500);
  digitalWrite(LED3, HIGH);
 delay(1000);
 digitalWrite(LED3, LOW);
 delay(500);
  digitalWrite(LED3, HIGH);
 delay(1000);
 digitalWrite(LED3, LOW);
 delay(500);
 //s
 (digitalRead(BUT3) == LOW) ;
 digitalWrite(LED3, HIGH);
 delay(500);
 digitalWrite(LED3, LOW);
 delay(500);
 digitalWrite(LED3, HIGH);
delay(500);
digitalWrite(LED3, LOW);
delay(500);
digitalWrite(LED3, HIGH);
 delay(500);
 digitalWrite(LED3, LOW);
 delay(500);
  }
 //yes
if
  (digitalRead(BUT4) == LOW) {
 digitalWrite(LED4, HIGH);
 delay(1000);
 digitalWrite(LED4, LOW);
 delay(500);
 digitalWrite(LED4, HIGH);
 delay(500);
 digitalWrite(LED4, LOW);
 delay(500);
 digitalWrite(LED4, HIGH);
 delay(1000);
 digitalWrite(LED4, LOW);
 delay(500);
 digitalWrite(LED4, HIGH);
 delay(1000);
 digitalWrite(LED4, LOW);
 delay(1000);
 digitalWrite(LED4, HIGH);
 delay(500);
 digitalWrite(LED4, LOW);
 delay(1000);
 digitalWrite(LED4, HIGH);
 delay(500);
 digitalWrite(LED4, LOW);
 delay(500);
  digitalWrite(LED4, HIGH);
 delay(500);
 digitalWrite(LED4, LOW);
 delay(500);
  digitalWrite(LED4, HIGH);
 delay(500);
 digitalWrite(LED4, LOW);
 delay(500);
  }
 
 //no
if
  (digitalRead(BUT5) == LOW) {
 digitalWrite(LED5, HIGH);
 delay(1000);
 digitalWrite(LED5, LOW);
 delay(500);
 digitalWrite(LED5, HIGH);
 delay(500);
 digitalWrite(LED5, LOW);
 delay(1000);
 digitalWrite(LED5, HIGH);
 delay(1000);
 digitalWrite(LED5, LOW);
 delay(500);
 digitalWrite(LED5, HIGH);
 delay(1000);
 digitalWrite(LED5, LOW);
 delay(500);
 digitalWrite(LED5, HIGH);
 delay(1000);
 digitalWrite(LED5, LOW);
 delay(500);
}

else{
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
}

}

