int value = 0;
float voltage;
int LED = 13;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  value = analogRead(A1);
  voltage = value * 5.0/1024;
  Serial.println(voltage);
  delay(500);
}
