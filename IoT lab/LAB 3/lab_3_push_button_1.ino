// C++ code
//
int button = 0;

void setup()
{
  pinMode(9, INPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  button = digitalRead(9);
  if (button == HIGH) {
    digitalWrite(5, HIGH);
  } else {
    digitalWrite(5, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}