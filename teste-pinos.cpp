// C++ code
//

const int V1 = 12;
const int V2 = 11;

void setup()
{
  pinMode(V1, OUTPUT);
  pinMode(V2, OUTPUT);
}

void loop()
{
  digitalWrite(V1, HIGH);
  delay(3000); 
  digitalWrite(V1, LOW);
  delay(3000); 
  
  delay(1000);
  
  digitalWrite(V2, HIGH);
  delay(3000); 
  digitalWrite(V2, LOW);
  delay(3000); 
}
