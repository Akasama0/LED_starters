#define LED_A_G 26
#define LED_A_Y 27
#define LED_A_R 28
#define LED_B_G 29
#define LED_B_Y  6
#define LED_B_R  7

void setup() {
  pinMode(LED_A_G, OUTPUT);
  pinMode(LED_A_Y, OUTPUT);
  pinMode(LED_A_R, OUTPUT);
  pinMode(LED_B_G, OUTPUT);
  pinMode(LED_B_Y, OUTPUT);
  pinMode(LED_B_R, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("start\n");
  digitalWrite(LED_A_G, HIGH);
  delay(500);
  digitalWrite(LED_A_G,  LOW);
  digitalWrite(LED_A_Y, HIGH);
  delay(500);
  digitalWrite(LED_A_Y,  LOW);
  digitalWrite(LED_A_R, HIGH);
  delay(500);
  digitalWrite(LED_A_R,  LOW);
  digitalWrite(LED_B_G, HIGH);
  delay(500);
  digitalWrite(LED_B_G,  LOW);
  digitalWrite(LED_B_Y, HIGH);
  delay(500);
  digitalWrite(LED_B_Y,  LOW);
  digitalWrite(LED_B_R, HIGH);
  delay(500);
  digitalWrite(LED_B_R,  LOW);
}
