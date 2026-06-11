int BUT1 = D0;
int BUT2 = D1;
int BUT3 = D2;
int BUT4 = D8;
int BUT5 = D9;


int LED1 = D3;
int LED2 = D4;
int LED3 = D5;
int LED4 = D6;
int LED5 = D7;

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
 if (digitalRead(BUT1) == HIGH) {
 digitalWrite(LED1, HIGH);
 delay(500);
 digitalWrite(LED1, LOW);
 delay(1000);
 }
 // long dash
 if
 (digitalRead(BUT2) == HIGH) {
 digitalWrite(LED2, HIGH);
 delay(1000);
 digitalWrite(LED2, LOW);
 delay(1000);
 }
 //s
 if 
  (digitalRead(BUT3) == HIGH) {
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
 (digitalRead(BUT3) == HIGH) ;
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
  (digitalRead(BUT4) == HIGH) {
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
  (digitalRead(BUT5) == HIGH) {
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
}

