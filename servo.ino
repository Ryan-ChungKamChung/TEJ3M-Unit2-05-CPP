// Copyright 2021 (c) Ryan Chung Kam Chung All rights reserved
//
// Created by Ryan Chung Kam Chung
// Created in February 2021
// This program rotates a servo

#include <Servo.h>

const int delayTime = 15;
int rotationAngle = 0;
Servo servo;


void setup() {
  servo.attach(3);
  servo.write(rotationAngle);
  delay(delayTime);
}


void loop() {
  for (rotationAngle = 0; rotationAngle < 180; rotationAngle++) {
  	servo.write(rotationAngle);
    delay(delayTime);
  }
  
  for (rotationAngle = 180; rotationAngle > 10; rotationAngle--) {
    servo.write(rotationAngle);
    delay(delayTime);
  }
}
