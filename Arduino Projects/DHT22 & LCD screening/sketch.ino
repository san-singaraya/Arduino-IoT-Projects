#include <LiquidCrystal.h>
#include <DHT.h>

#define DHTPIN 6
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

// LCD: RS, EN, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

void setup() {
  lcd.begin(16, 2);
  dht.begin();
  delay(2000);
  lcd.clear();
}

void loop() {

  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if(isnan(temperature) || isnan(humidity)) {
    Serial.println("Failed to read from DHT11 sensor!");
    return;
  }

  lcd.setCursor(0,0);
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");

  lcd.setCursor(0,1);
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println("%");

  delay(2000);
}





