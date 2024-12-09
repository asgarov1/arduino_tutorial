
int PIN_8 = 8;
int PIN_9 = 9;
int PIN_10 = 10;
int PIN_11 = 11;
int PIN_12 = 12;

static int binaries[32][5] = {
  {0,0,0,0,1},
  {0,0,0,1,0},
  {0,0,0,1,1},
  {0,0,1,0,0},
  {0,0,1,0,1},
  {0,0,1,1,0},
  {0,0,1,1,1},
  {0,1,0,0,0},
  {0,1,0,0,1},
  {0,1,0,1,0},
  {0,1,0,1,1},
  {0,1,1,0,0},
  {0,1,1,0,1},
  {0,1,1,1,0},
  {0,1,1,1,1},
  {1,0,0,0,1},
  {1,0,0,1,0},
  {1,0,0,1,1},
  {1,0,1,0,0},
  {1,0,1,0,1},
  {1,0,1,1,0},
  {1,0,1,1,1},
  {1,1,0,0,0},
  {1,1,0,0,1},
  {1,1,0,1,0},
  {1,1,0,1,1},
  {1,1,1,0,0},
  {1,1,1,0,1},
  {1,1,1,1,0},
  {1,1,1,1,1}
};

static int pins[] = {PIN_8, PIN_9, PIN_10, PIN_11, PIN_12};


void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_8, OUTPUT);
  pinMode(PIN_9, OUTPUT);
  pinMode(PIN_10, OUTPUT);
  pinMode(PIN_11, OUTPUT);
  pinMode(PIN_12, OUTPUT);

  // Start serial communication at 9600 baud
  Serial.begin(9600);
  Serial.println("Serial communication started.");
}

void loop() {
  int length = sizeof(binaries) / sizeof(binaries[0]);
  for (int i = 0; i < length; i++){
    Serial.println(numberToBinary(i, 5));
    printArrayContents(binaries[i], 5);
    for (int j = 0; j < 5; j++){
      if(binaries[i][j] == 1) {
        digitalWrite(pins[j], HIGH);
      } else {
        digitalWrite(pins[j], LOW);
      }
    }
    delay(3000);
  }
}

String numberToBinary(int num, int bitLength) {
  String binaryString = "";
  for (int i = bitLength - 1; i >= 0; i--) {
    binaryString += String((num >> i) & 1); // Append each bit to the string
  }
  return binaryString;
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
