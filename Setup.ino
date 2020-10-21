void setup() {
  meuServo.attach(10);
  meuServo.write(90);
  delay(1000);
  distancia = lerPing();
  delay(100);
  distancia = lerPing();
  delay(100);
  distancia = lerPing();
  delay(100);
  distancia = lerPing();
  delay(100);
}
