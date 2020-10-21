void girarDir() {
  motor1.run(FORWARD);
  motor4.run(FORWARD);

  delay(350);

  motor1.run(BACKWARD);
  motor4.run(BACKWARD);
}
