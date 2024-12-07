
int RED_PIN = 8;
int GREEN_PIN = 9;
int BLUE_PIN = 10;


void setup() {
  // put your setup code here, to run once:
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  for(int i=0; i<5; i++) {
    lightUp(RED_PIN);
  }
  for(int i=0; i<10; i++) {
    lightUp(GREEN_PIN);
  }
  for(int i=0; i<20; i++) {
    lightUp(BLUE_PIN);
  }
}

void lightUp(uint8_t pin) {
  digitalWrite(pin, HIGH);
  delay(100);
  digitalWrite(pin, LOW);
  delay(100);
}
