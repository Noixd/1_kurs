#include "Header.h"

void Sort_option(double* a) {

	double t;
	int i_min;

	for (int i = 0; i < 27; i++) {
		i_min = i;
		for (int j = i + 1; j < 27; j++)
			if (a[j] < a[i_min]) { i_min = j; }

		t = a[i_min];
		a[i_min] = a[i];
		a[i] = t;
	}

	for (int i = 0; i < 27; i++) printf("%.3lf\n", a[i]);
	printf("\n");

	return;
}