//  *** Same set of useful variables for elements on the shield

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

// ***


// *** new things! (sort of)

int lastButton4State = 0;
int lastButton8State = 0;
int lastButton10State = 0;

// ***

// int onOffState = 0; // Do not need this

void setup() {
  
// *** Same set of setup for elements on the shield

  pinMode(ledPedRed, OUTPUT);
  pinMode(ledPedGreen, OUTPUT);
  pinMode(ledVehGreen, OUTPUT);
  pinMode(ledVehYellow, OUTPUT);
  pinMode(ledVehRed, OUTPUT);

  pinMode(button4Pin, INPUT);
  pinMode(button8Pin, INPUT);
  pinMode(button10Pin, INPUT);
  
  pinMode(buzzerPin, OUTPUT);
  
// ***

// Do Re Mi once
  tone(buzzerPin, 261.63);
  delay(300);
  tone(buzzerPin, 293.66);
  delay(300);  
  tone(buzzerPin, 329.63);
  delay(300);
  noTone(buzzerPin);
}

void loop() {
  button4State = digitalRead(button4Pin);
  if (button4State == HIGH && lastButton4State == LOW) {
    tone(buzzerPin, 261.63);
    delay(300);
  } 
  
  else {
    noTone(buzzerPin);
  }

  button8State = digitalRead(button8Pin);
  if (button8State == HIGH && lastButton8State == LOW) {
    tone(buzzerPin, 293.66);
    delay(300);
  } 
  
  else {
    noTone(buzzerPin);
  }

  button10State = digitalRead(button10Pin);
  if (button10State == HIGH && lastButton10State == LOW) {
    tone(buzzerPin, 329.63);
    delay(300);
  } 
  
  else {
    noTone(buzzerPin);
  }

// *** The only special things here
 
  lastButton4State = button4State;
  lastButton8State = button8State;
  lastButton10State = button10State;

// ***
}
