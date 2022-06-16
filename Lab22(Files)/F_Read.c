#include "Header.h"

//Для 2 задания

void File_R(void) {

	FILE* data_file;
	double count;

	if ((data_file = fopen("DATA.txt", "r")) == NULL) {
		printf("Невозможно открыть файл");
		exit(2);
	}

	for (int i = 0; i < 27; i++)
	{
		fscanf(data_file, "%lf", count);
		printf("%lf\n", count);
	}
	return;
}
