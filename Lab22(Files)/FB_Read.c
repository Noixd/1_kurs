#include "Header.h"

//Задание 4 (и 5)

void BinaryW_R(double* a, FILE *data_file) {

	for (int i = 0; i < 27; i++)
	{
		fread(&a[i], sizeof(double), 1, data_file);
	}

	Sort_bubble(a);

	printf("max: %lf\n", a[6]);
	printf("min: %lf\n", a[0]);

}
