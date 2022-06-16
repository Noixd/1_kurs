#include "Header.h"

void mass_val(double* a) {

	for (int i = 0; i < 27; i++) {
		a[i] = (double)rand() / RAND_MAX * 9.0 - 65.9;
		printf("%.3lf\n", a[i]);
	}
	printf("\n");
}
