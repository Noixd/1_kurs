#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

int main(void) {

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	double a[27];

	for (int i = 0; i < 27; i++) {
		a[i] = (double)rand() / RAND_MAX * 9.0 - 65.9;
	}

}
