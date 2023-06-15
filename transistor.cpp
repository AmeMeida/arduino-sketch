// C++ code
//

#define INTERRUPTOR 12
#define ALIMENTACAO 13

void setup()
{
  Serial.begin(9600);
  pinMode(INTERRUPTOR, OUTPUT);
  pinMode(ALIMENTACAO, OUTPUT);

  digitalWrite(ALIMENTACAO, HIGH);
  Serial.println("online");
}

void loop()
{
  // Serial.println("hello");
  
  if (Serial.available() > 1) {
    int entrada = Serial.read();
    Serial.println(entrada == '1' ? HIGH : LOW);
    digitalWrite(INTERRUPTOR, entrada == '1' ? HIGH : LOW);
  }
}
