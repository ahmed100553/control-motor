#include <Motors_Control.h>
Motors_Control motor(3, 5, 6, 9);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  motor.RIGHT(200);
  motor.LEFT(200);
  motor.BACKWARD(200);
  motor.FORWARD(200);
  motor.STOP();
  delay(1000);
}
