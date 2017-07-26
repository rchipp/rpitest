#include <wiringPi.h>

int main () {
  wiringPiSetup ();
  pinMode (1, OUTPUT);

  while (1) {
    digitalWrite(1,HIGH);
    delay(800);
    digitalWrite(1,LOW);
    delay(200);
  }
  return 0;
}
