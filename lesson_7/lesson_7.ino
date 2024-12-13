
int RED_PIN = 9;
int BRIGHT = 255;
int MEDIUM = 125;
int QUARTER = 65;
int PERCENT_10 = 25;
int PERCENT_5 = 13;
int FIVE = 5;
int THREE = 3;
int ONE = 1;


void setup() {
  // put your setup code here, to run once:
  pinMode(RED_PIN, OUTPUT);
  // Start serial communication at 9600 baud
  Serial.begin(9600);
  Serial.println("Serial communication started.");
}

void loop() {
  analogWrite(RED_PIN, THREE);
  delay(2000);

  analogWrite(RED_PIN, MEDIUM);
  delay(2000);  
}
