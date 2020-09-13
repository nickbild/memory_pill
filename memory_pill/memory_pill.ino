#include <WiFiNINA.h>
#include "arduino_secrets.h"

char ssid[] = SECRET_SSID;
char pass[] = SECRET_PASS;
int status = WL_IDLE_STATUS;
int button = A7;

WiFiClient client;
char server[] = "192.168.1.113";

void setup() {
  //Initialize serial and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {}

  pinMode(button, INPUT);

  // check for the WiFi module:
  if (WiFi.status() == WL_NO_MODULE) {
    Serial.println("Communication with WiFi module failed!");
    while (true);
  }

  // Attempt to connect to WiFi network.
  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to WPA SSID: ");
    Serial.println(ssid);
    // Connect to WPA/WPA2 network.
    status = WiFi.begin(ssid, pass);
    
    delay(5000);
  }

  Serial.println("Connected to the network.");
}

void loop() {
  if (digitalRead(button) == LOW) {
    buttonPressed();
    delay(5000);
  }
}

void buttonPressed() {
  if (client.connect(server, 5000)) {
    Serial.println("connected to server");
    // Make a HTTP request:
    client.println("GET /set_time HTTP/1.1");
    client.println("Host: 192.168.1.113");
    client.println("Connection: close");
    client.println();
    client.stop();
  }
}
