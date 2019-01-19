#include "Led.h"

Led _greenLed(3);
Led _redLed(5);
int var;

void setup() {

}

void loop() {
	for (var = 0; var < 255; ++var) {
		_greenLed.sendAnalogOutput(var);
		_redLed.sendAnalogOutput(255 - var);
		delay(25);
	}

	for (var = 255; var > 0 ; --var) {
		_greenLed.sendAnalogOutput(var);
		_redLed.sendAnalogOutput(255 - var);
		delay(25);
	}
}
