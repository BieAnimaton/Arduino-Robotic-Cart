#include <AFMotor.h>
#include <NewPing.h>
#include <Servo.h>

#define PinoTrig A0
#define PinoEcho A1
#define DistMax 200

#define VelocMax 255
#define VelocMaxOffset 20

NewPing sonarPing (PinoTrig, PinoEcho, DistMax);

AF_DCMotor motor1(1, MOTOR12_8KHZ);
AF_DCMotor motor4(4, MOTOR34_8KHZ);

Servo meuServo;

boolean irFrente = false;
int distancia = 100;
int velocSet = 0;
