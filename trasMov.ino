void trasMov() {
  irFrente = false;
  motor1.run(FORWARD);
  motor4.run(BACKWARD);

  for (velocSet = 0; velocSet < VelocMax; velocSet += 2) {
    motor1.setSpeed(velocSet);
    motor4.setSpeed(velocSet);
    
    delay(5);
  }
}
