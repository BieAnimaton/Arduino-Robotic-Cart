void loop() {
  int distanciaDir = 0;
  int distanciaEsq = 0;
  delay(40);

  if (distancia <= 15) {
    pararMov();
    delay(100);
    trasMov();
    delay(300);
    pararMov();
    delay(200);
    distanciaDir = olharDir();
    delay(300);
    distanciaEsq = olharEsq();
    delay(300);

    if (distanciaDir >= distanciaEsq) {
      girarDir();
      pararMov();
    } else {
      girarEsq();
      pararMov();
    }
  } else {
    frenteMov();
  }
  
  distancia = lerPing();
}
