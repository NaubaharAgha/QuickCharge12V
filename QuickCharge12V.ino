void setup() {
  int DMinus = 6;
  int DPlus = 4;
  pinMode(DMinus, INPUT_PULLUP);
  pinMode(DPlus, OUTPUT);
  delay(1000);
  digitalWrite(DPlus, HIGH);
  delay(1250);
  pinMode(DMinus, OUTPUT);
  delay(1000);
  digitalWrite(DMinus, HIGH);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:

}
