#include <OneWire.h>
#include <DallasTemperature.h>

// Inisialisasi pin data untuk sensor DS18B20
const int oneWireBusPin = 4; // Sesuaikan dengan pin yang digunakan pada Arduino Anda

// Inisialisasi objek OneWire dan DallasTemperature
OneWire oneWire(oneWireBusPin);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  sensors.begin();
}

void loop() {
  sensors.requestTemperatures();  // Minta sensor untuk membaca suhu

  // Baca suhu dalam Celsius dan Fahrenheit
  float celsius = sensors.getTempCByIndex(0);
  float fahrenheit = sensors.toFahrenheit(celsius);

  Serial.print("Suhu Celsius: ");
  Serial.print(celsius);
  Serial.print("°C | Suhu Fahrenheit: ");
  Serial.println(fahrenheit);
  Serial.print("°F");

  delay(1000);  // Tunggu sejenak sebelum membaca suhu lag
}
