#include "collision/detect.h"

#include "common/axis.h"
#include "common/utils.h"

#include "drivers/light_led.h"

#include "sensors/acceleration.h"

void taskDetectCollisions(timeUs_t currentTimeUs)
{
    UNUSED(currentTimeUs);

	int32_t accX = acc.accSmooth[X]/acc.dev.acc_1G;

	if (accX > 1) {
		LED1_ON;
	} else {
		LED1_OFF;
	}
}
