/**
 from https://forum.pjrc.com/threads/25522-Serial-Number-of-Teensy-3-1/page2
*/

void setup() {
  char ID[32];
  sprintf(ID, "%08lX %08lX %08lX %08lX", SIM_UIDH, SIM_UIDMH, SIM_UIDML, SIM_UIDL);

  Serial.begin(115200);
  while (!Serial);
  pinMode(13, OUTPUT);
  digitalWrite(13, HIGH); // just to show that serial port is opened
  delay (1000);
  Serial.print("Reading 128-bit UniqueID from chip: ");
  Serial.println(ID);
  digitalWrite(13, LOW);
}

void loop() {
}
