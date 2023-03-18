/*
Control the direction and speed of a DC motor using class on a Arduino.
Defines a Motor class and creates an instance of the class to control a motor connected to pins 9 and 10 of the Arduino board.
The Motor class has three member functions: forward, reverse, and stop. 
The forward function sets the motor to rotate in one direction. 
The reverse function sets it to rotate in the opposite direction. 
The stop function stops the motor from rotating.
The constructor for the Motor class takes two integer arguments that specify the pins to which the motor is connected. 
In the constructor, the pinMode function is used to set the pin modes for the two motor pins as outputs.
In the setup function, nothing needs to be done.
In the loop function, the motor is first set to rotate forward for 1 second using the forward function. 
Followed by a 1 second delay using the delay function. 
Then, the motor is stopped using the stop function, followed by another 1 second delay. 
The motor is set to rotate in reverse for 1 second using the reverse function, followed by another 1 second delay. 
The motor is then stopped again using the stop function, followed by another 1 second delay.
*/

// define the motor class
class Motor {
  private:
    int pin1;
    int pin2;
  public:
    Motor(int p1, int p2) {
      pin1 = p1;
      pin2 = p2;
      pinMode(pin1, OUTPUT);
      pinMode(pin2, OUTPUT);
    }
    //rotate forward 
    void forward() {
      digitalWrite(pin1, HIGH);
      digitalWrite(pin2, LOW);
    }
    //rotate backwards
    void reverse() {
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, HIGH);
    }
    //stop
    void stop() {
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, LOW);
    }
};

// create an instance of the motor class
Motor myMotor(9, 10);

void setup() {
  // nothing to do
}

void loop() {
  // run the motor forward for 1 second
  myMotor.forward();
  delay(1000);

  // stop the motor for 1 second
  myMotor.stop();
  delay(1000);

  // run the motor in reverse for 1 second
  myMotor.reverse();
  delay(1000);

  // stop the motor for 1 second
  myMotor.stop();
  delay(1000);
}
