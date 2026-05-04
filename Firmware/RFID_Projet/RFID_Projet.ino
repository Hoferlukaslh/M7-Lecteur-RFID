// Rien a voir ici, c'est juste un test de la board Xiao ESP32-C6

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.write("hello world !");
  delay(1000);
}