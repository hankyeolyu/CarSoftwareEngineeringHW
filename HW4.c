#include <stdint.h>
#include <stdio.h>

int main(void) {
	uint16_t gt = 10;
	if (gt == 10)
		gt++;
	if (gt != 10)
		goto L1;
L1:
	gt -= 1;
	goto exit;

exit:
	printf("%d\n", gt);

	return 0;
}