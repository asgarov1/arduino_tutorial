
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
    lightUp(RED_PIN,  100);
  }
  for(int i=0; i<10; i++) {
    lightUp(GREEN_PIN, 500);
  }
  for(int i=0; i<15; i++) {
    lightUp(BLUE_PIN, 1000);
  }
  delay(1000);
}

void lightUp(int pin, int duration) {
  digitalWrite(pin, HIGH);
  delay(duration);
  digitalWrite(pin, LOW);
  delay(duration);
}
