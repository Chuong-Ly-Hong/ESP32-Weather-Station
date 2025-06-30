#define BLYNK_TEMPLATE_ID "TMPL6DFyowuMr"
#define BLYNK_TEMPLATE_NAME "weather station"

// Include the library files
#include <Wire.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <DHT.h>

#define LDR 4
#define TH 5
#define Rain 34

DHT dht(TH, DHT22);
BlynkTimer timer;

// Enter Auth token
char auth[] = "3EhzZI282Ep0gEw7gxyfXEcMa3jRMJlh";

// Enter your WIFI SSID and password
char ssid[] = "repoo";
char pass[] = "12345677";

void setup() {
  // Debug console
 Serial.begin(115200);
 Blynk.begin(auth, ssid, pass);
 dht.begin();
 
 pinMode(LDR, INPUT);
 pinMode(Rain, INPUT);
 analogReadResolution(12);
}

// Get the DHT22 sensor values
void DHT22sensor() {
 float h = dht.readHumidity();
 float t = dht.readTemperature();

 if (isnan(h) || isnan(t)) {
  Serial.println("Failed to read from DHT sensor!");
  return;
 }
 Blynk.virtualWrite(V0, t);
 Blynk.virtualWrite(V1, h);
}

// Get the rain sensor values
void rainSensor() {
 int Rvalue = analogRead(Rain);
 Rvalue = map(Rvalue, 0, 4095, 0, 100);
 Rvalue = (Rvalue - 100) * -1;
 Blynk.virtualWrite(V2, Rvalue);
 Serial.println(Rvalue);
}

// Get the LDR sensor values
void LDRsensor() {
 bool value = digitalRead(LDR);
 WidgetLED LED(V3);
 if (value == 1) {
  LED.on();
 } else {
  LED.off();
 }
}

void loop() {
DHT22sensor();
rainSensor();
LDRsensor();
Blynk.run();
}