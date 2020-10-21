int lerPing() {
  delay(70);
  int cm = sonarPing.ping_cm();
  if (cm == 0) {
    cm = 250;
  }
  
  return cm;
}
