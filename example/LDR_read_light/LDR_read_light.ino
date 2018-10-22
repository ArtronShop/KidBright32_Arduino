#define LDR_PIN 36

// Calibration
#define L_VALUE 0
#define H_VALUE 400
// ------------------

uint8_t readLight() {
  uint8_t rowData = analogRead(LDR_PIN);
  uint8_t value = map(rowData, L_VALUE, H_VALUE, 0, 100);
  value = 100 - value;
  value = min(value, 100);
  return value;
}

void setup() {
  Serial.begin(115200);
  pinMode(LDR_PIN, INPUT);
}

void loop() {
  Serial.print("Light: ");
  Serial.println(readLight());
  delay(500);
}
