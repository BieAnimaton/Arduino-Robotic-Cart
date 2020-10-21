int olharEsq() {
  meuServo.write(170);
  delay(650);
  int distancia = lerPing();
  delay(100);
  meuServo.write(90);
  
  return distancia;
  delay(100);
}
