void setup() {
  // put your setup code here, to run once:
  	// Open serial communications and wait for port to open:
	Serial.begin(115200);
	// Wait here for up to 10 seconds to see if we will use Serial Monitor, so output is not lost
	while((!Serial) && (millis()<10000));    // wait until serial monitor is open or timeout,
	Serial.print(millis());
	Serial.println(" msec to start serial");

}

char buffer[50];
int16_t i=0;

void loop() {
  // put your main code here, to run repeatedly:
  
  sprintf(buffer, "the current value is %d", i++);
  Serial.println(buffer);

}
