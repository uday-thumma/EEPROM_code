#include<EEPROM.h>
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
EEPROM.begin(100);
EEPROM.write(1,'u');
Serial.println((char)EEPROM.read(1));
EEPROM.writeInt(2,201);
Serial.println(EEPROM.read(2));

EEPROM.commit();
}

void loop() {
  // put your main code here, to run repeatedly:

}
