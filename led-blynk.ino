#define BLYNK_TEMPLATE_ID "TMPL6SevwMQaE"
#define BLYNK_TEMPLATE_NAME "lampu LED"
#define BLYNK_AUTH_TOKEN "fpbisDCS9HMqQLAn3XiPgNE4mV0NdTnW"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "5 kg";
char pass[] = "87654321";

int led1 = 2;
int led2 = 4;

BLYNK_WRITE(V0) { // Tombol 1 → LED1
  int state = param.asInt();
  digitalWrite(led1, state);
}

BLYNK_WRITE(V1) { // Tombol 2 → LED2
  int state = param.asInt();
  digitalWrite(led2, state);
}

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}
