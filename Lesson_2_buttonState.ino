const int ledPedRed = 13;
const int ledPedGreen = 12;
const int ledVehGreen = 5; 
const int ledVehYellow = 6; 
const int ledVehRed = 7;

const int button4Pin = 4;
const int button8Pin = 8;
const int button10Pin = 10;

const int buzzerPin = 11;

int button4State = 0;
int button8State = 0;
int button10State = 0;

int lastButtonState = 0;
int onOffState = 0;
int val = 0;

void setup() {
  pinMode(ledVehGreen, OUTPUT);
  pinMode(ledVehYellow, OUTPUT);
  pinMode(ledVehRed, OUTPUT);

  pinMode(button4Pin, INPUT);
  pinMode(button8Pin, INPUT);
  pinMode(button10Pin, INPUT);
}


void loop() {
  button4State = digitalRead(button4Pin);
  
  if (button4State == HIGH && onOffState == 0 && lastButtonState == 0) { 
    onOffState = 1;
    delay(100);
  } 

  else if (button4State == HIGH && onOffState == 1 && lastButtonState == 0) { 
    onOffState = 0;
    delay(100);
  } 

  lastButtonState = button4State;

  if (onOffState == 1) {
    digitalWrite(ledVehGreen, HIGH);
  }

  if (onOffState == 0) {
    digitalWrite(ledVehGreen, LOW);
  }
  
}

