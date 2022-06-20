#include "Header.h"

//Для 3 задания (и 5)

void BinaryW_F(double* a) {

	FILE* data_file;

	data_file = fopen("DATA_binary", "wb");

	for (int i = 0; i < 27; i++) {

		fwrite(&a[i], sizeof(double), 1, data_file);
	}
	fclose(data_file);
	return;
}
