#include "Header.h"

void Sort_bubble(double* a) {

	double t;

	for (int k = 1; k < 27; k++) {
		for (int i = 0; i < 27 - k; i++)
		{
			if (a[i] > a[i + 1]) {
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}

	printf("\n");

	return;
}
