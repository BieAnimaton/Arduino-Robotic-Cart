int olharDir() {
  meuServo.write(50);
  delay(650);
  int distancia = lerPing();
  delay(1000);
  meuServo.write(90);
  
  return distancia;
}
