
int RED_PIN = 8;
int GREEN_PIN = 9;
int BLUE_PIN = 10;
int YELLOW_PIN = 11;

static int binaries[16][4] = {
  {0,0,0,1},
  {0,0,1,0},
  {0,0,1,1},
  {0,1,0,0},
  {0,1,0,1},
  {0,1,1,0},
  {0,1,1,1},
  {1,0,0,0},
  {1,0,0,1},
  {1,0,1,0},
  {1,0,1,1},
  {1,1,0,0},
  {1,1,0,1},
  {1,1,1,0},
  {1,1,1,1}
};

static int pins[] = {RED_PIN, GREEN_PIN, BLUE_PIN, YELLOW_PIN};


void setup() {
  // put your setup code here, to run once:
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);

  // Start serial communication at 9600 baud
  Serial.begin(9600);
  Serial.println("Serial communication started.");
}

void loop() {
  int length = sizeof(binaries) / sizeof(binaries[0]);
  for (int i = 0; i < length; i++){
    Serial.print("Current Binary: ");
    printArrayContents(binaries[i], 4);
    for (int j = 0; j < 4; j++){
      if(binaries[i][j] == 1) {
        digitalWrite(pins[j], HIGH);
      } else {
        digitalWrite(pins[j], LOW);
      }
    }
    delay(3000);
  }
  delay(3000);
}

void printArrayContents(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        Serial.print(arr[i]);
        if (i < length - 1) {
            Serial.print(", ");
        }
    }
    Serial.println();
}
