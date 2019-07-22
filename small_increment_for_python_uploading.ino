int sbrs=0;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  Serial.print("Hello the count now is :");
  Serial.print(sbrs);
  Serial.println("/-");
  ++sbrs;
  delay(1000);
  // put your main code here, to run repeatedly:

}
