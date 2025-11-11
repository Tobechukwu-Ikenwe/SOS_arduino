// This project demonstrates a simple SOS signaling system using an Arduino and a single LED. The LED flashes in the standard Morse code pattern for SOS (... --- ...), allowing you to simulate an emergency signal for learning or demonstration purposes.

//S → three short blinks

//O → three long blinks

//S → three short blinks

//The cycle repeats indefinitely.

int redLED = 13;
int dit = 250;
int dat = dit * 3;
int longW = dit * 6;

void setup(){
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // we want 3 fast blinks
  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  // longer blinks
  digitalWrite(redLED, HIGH);
  delay(dat);
  digitalWrite(redLED, LOW);
  delay(dat);

  digitalWrite(redLED, HIGH);
  delay(dat);
  digitalWrite(redLED, LOW);
  delay(dat);

  digitalWrite(redLED, HIGH);
  delay(dat);
  digitalWrite(redLED, LOW);
  delay(dat);

  // shorter blinks
  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  digitalWrite(redLED, HIGH);
  delay(dit);
  digitalWrite(redLED, LOW);
  delay(dit);

  delay(longW); // need for delay to notice shorter blinks
}
