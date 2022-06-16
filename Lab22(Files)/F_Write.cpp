#include "Header.h"

void File_W(double *a) {

	FILE* data_file;

	data_file = fopen("DATA.txt", "w");

	for (int i = 0; i < 27; i++) {

		fprintf(data_file, "%lf\n", a[i]);
	}
}