#include <stdint.h>

uint32_t func(uint32_t ie) {
	if (ie > 20)
		return 20;
	else if (ie < 20)
		return 10;
}

int main(void) {
	uint32_t data, ie = 15;
	data = func(ie);
}