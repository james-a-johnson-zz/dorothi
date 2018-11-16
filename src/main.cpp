/*
 * Will blink the onboard LED
 */

#include <Particle.h>
SYSTEM_THREAD(ENABLED);
SYSTEM_MODE(MANUAL);

int led1 = D0;
int led2 = D7;

void setup()
{
    RGB.control(true);
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    Serial.print("Michael sux\n");

    RGB.color(255, 255, 255);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);

    delay(1000);

    RGB.color(255, 0, 255);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);

    delay(1000);
}
