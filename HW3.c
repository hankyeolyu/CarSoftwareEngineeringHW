#include <stdlib.h>

int main(void) {
	int* arr;
	arr = (int*)malloc(sizeof(int) * 4);
	for (int i = 0; i < 4; i++)
		arr[i] = 0;
	free(arr);

	return 0;
}