
/** ---------- UINT64 Test Code ----------**/
 
/** ---------- REVISIONS ----------

2017May22 bboyes  Do 64-bit unsigned ints exist?
--------------------------------**/

#include <Arduino.h>

/* ========== SETUP ========== */
void setup(void) 
{
  
  Serial.begin(115200);     // use max baud rate
  // Teensy3 doesn't reset with Serial Monitor as do Teensy2/++2, or wait for Serial Monitor window
  // Wait here for 10 seconds to see if we will use Serial Monitor, so output is not lost
  while((!Serial) && (millis()<10000));    // wait until serial monitor is open or timeout, which seems to fall through
 
  Serial.printf("\r\n64-bit Integer Test Code\r\n");

  Serial.printf("Build %s - %s\r\n%s\r\n", __DATE__, __TIME__, __FILE__);

#if defined(__MKL26Z64__)
  Serial.println( "CPU is T_LC");
#elif defined(__MK20DX256__)
  Serial.println( "CPU is T_3.1/3.2");
#elif defined(__MK20DX128__)
  Serial.println( "CPU is T_3.0");
#elif defined(__MK64FX512__)
  Serial.println( "CPU is T_3.5");
#elif defined(__MK66FX1M0__)
  Serial.println( "CPU is T_3.6");
#endif
  Serial.print( "F_CPU =");   Serial.println( F_CPU );
  
}



/* ========== LOOP ========== */
void loop(void) 
{

  uint64_t uint64_test = 0;
  uint64_test = UINT64_MAX;
  // Serial.println(uint64_test);
  // uint64_test++;
  // Serial.println(uint64_test);
  Serial.printf("More than 32 bits? %u, 0x%llX\r\n", uint64_test, uint64_test);
  Serial.printf ("UINT32_MAX=0x%X, UINT64_MAX=0x%llX\r\n", UINT32_MAX, UINT64_MAX);
  Serial.printf ("UINT64_MAX=0x%llX, UINT32_MAX=0x%X\r\n", UINT64_MAX, UINT32_MAX);
  Serial.printf ("UINT32_MAX=%u, UINT64_MAX=%llu\r\n", UINT32_MAX, UINT64_MAX);

  while(1);
}



