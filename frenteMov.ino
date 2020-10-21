void frenteMov() {
  if (!irFrente) {
    irFrente = true;
    motor1.run(BACKWARD);
    motor4.run(FORWARD);

    for (velocSet = 0; velocSet < VelocMax; velocSet += 2) {
      motor1.setSpeed(velocSet);
      motor4.setSpeed(velocSet);
      
      delay(5);
    }
  }
}
