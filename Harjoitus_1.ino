/*comments
 * 
 */
 #define LED1 3
 #define LED2 4
 #define LED3 5
 #define LED4 6
 #define LED5 7
 #define  LEDON LOW
 #define  LEDOFF HIGH
 
void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}

int viive1 = 25;
int viive2 = 75;

void loop() {
  
  digitalWrite(LED1, LEDON);
  delay(viive1);
  digitalWrite(LED3, LEDOFF);
  delay(viive2);
  
  digitalWrite(LED2, LEDON);
  delay(viive1);
  digitalWrite(LED4, LEDOFF);
  delay(viive2);
  
  digitalWrite(LED3, LEDON);
  delay(viive1);
  digitalWrite(LED5, LEDOFF);
  delay(viive2);
  
  digitalWrite(LED4, LEDON);
  delay(viive1);
  digitalWrite(LED1, LEDOFF);
  delay(viive2);
  
  digitalWrite(LED5, LEDON);
  delay(viive1);
  digitalWrite(LED2, LEDOFF);
  delay(viive2);
  
  digitalWrite(LED4, LEDON);
  delay(viive1);
  digitalWrite(LED3, LEDOFF);
  delay(viive2);
  
  digitalWrite(LED3, LEDON);
  delay(viive1);
  digitalWrite(LED5, LEDOFF);
  delay(viive2);
  
  digitalWrite(LED2, LEDON);
  delay(viive1);
  digitalWrite(LED4, LEDOFF);
  delay(viive2);
 
}
