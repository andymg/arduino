#include <Max3421e.h>
#include <Usb.h>
#include <AndroidAccessory.h>

#define ARRY_SIZE 12

AndroidAccessory acc("Manufacturer","Model","Description","Version","URI","Serial");

char hello[ARRY_SIZE]={'h','e','l','o',' ','w','o','r','l','d','!'};

void setup() {
  Serial.begin(115200);
  acc.powerOn();
}

void loop() {

    if (acc.isConnected()) {
    for (int x=0;x < ARRY_SIZE; x++) {
        Serial.print(hello[x]);
        delay(250);  
    
    }
    Serial.println();
    delay(250);
    }

}
