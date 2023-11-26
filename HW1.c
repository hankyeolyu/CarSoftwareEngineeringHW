#include <stdio.h>
#include <stdint.h>

uint32_t cruise_control(uint32_t speed) {
	if (speed > 60)
		cruise_control(speed - 1);
	else if (speed < 60)
		cruise_control(speed + 1);
	else
		return speed;
}

int main(void) {
	uint32_t speed;
	scanf("%d", &speed);
	speed = cruise_control(speed);
	printf("%d\n", speed);

	return 0;
}