/*************************************************************
  model: ESP8266 (cp210x)
  CP210x USB to UART Bridge VCP Drivers:
    https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers
  Package arduino for ESP8266 in Preferences /Additional Boards Manager 
  link copy 
    http://arduino.esp8266.com/stable/package_esp8266com_index.json
  

  Download latest Blynk library here:
    https://codeload.github.com/blynkkk/blynk-library/zip/master
 
  link IFTTT :
    https://ifttt.com/

 *************************************************************/

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "KUaP15mFFhUu59jcUjAf7VYekuahVzTO";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "chatchard";
char pass[] = "1103250647";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
  int a;
  a = digitalRead(D1);//GPIO-5
  Serial.print(a);
  delay(100);
  
}
