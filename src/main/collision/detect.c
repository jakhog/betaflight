#include "collision/detect.h"

#include "common/utils.h"
#include "drivers/light_led.h"

void taskDetectCollisions(timeUs_t currentTimeUs)
{
    UNUSED(currentTimeUs);

	int a = 0;

	LED1_ON;
	for (int i = 0; i < 1000; i++) {
		a++;
	}
	LED1_OFF;
}
