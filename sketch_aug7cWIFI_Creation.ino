#include <WiFi.h>

const char* ssid = "ESP32_Beni-Bobynet";  // SSID of the Wi-Fi network
const char* password = "esp123467";     // Password for the Wi-Fi network

void setup() {
  // Initialize Serial Monitor
  Serial.begin(115200);
  
  // Print message to Serial Monitor
  Serial.println("Creating AP");  // Corrected from 'print' to 'Serial'
  
  // Set Wi-Fi mode to Access Point
  WiFi.mode(WIFI_AP);  // Corrected from 'WiFi.Mode' to 'WiFi.mode'
  
  // Start the Access Point
  WiFi.softAP(ssid, password);
  
  // Print the IP address of the Access Point
  Serial.print("AP created with IP Gateway: ");
  Serial.println(WiFi.softAPIP());
}

void loop() {
  // The loop can be used for other tasks or to keep the AP running
  delay(1000);  // Add a delay to avoid overwhelming the loop
}