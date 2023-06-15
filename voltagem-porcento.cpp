// C++ code
//

#define MOTOR 11
#define LED 10

void setup()
{
  Serial.begin(9600);
  pinMode(MOTOR, OUTPUT);
  pinMode(LED, OUTPUT);

  Serial.println("online");
}

void loop()
{
  // Serial.println("hello");
  
  if (Serial.available() > 1) {
    int speed = Serial.parseInt();
    
    int volt = map(speed, 0, 100, 0, 255);

    Serial.println("Setting volts to " + String(volt));
    analogWrite(MOTOR, volt);
    analogWrite(LED, volt);
  }
}
