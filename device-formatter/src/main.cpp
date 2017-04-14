#include "FS.h"
void setup() {
Serial.begin(115200);
Serial.println("");
delay(1000);
Serial.println("Mounting FS...");
if (!SPIFFS.begin()) {
Serial.println("Failed to mount file system");
return;
}

if (!SPIFFS.format()) {
Serial.println("Failed to format");
} else {
Serial.println("File system formatted");
}
}
void loop() {
}
