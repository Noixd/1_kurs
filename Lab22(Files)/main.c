#include "Header.h"

int main(int argc, char *argv[]) {

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	double a[27];
	int u_sel;
	FILE *data_file;

	printf("1. Пузырьковая сортировка;\n");
	printf("2. Сортировка выбором;\n");
	printf("3. Вывод данных из текстового файла на экран;\n");
	printf("4. Генерация и запись в бинарный файл;\n");
	printf("5. Чтение из бинарного файла и вывод max и min значения;\n");
	printf("0. Выход из программы.\n");

	while (1) {
		while (scanf("%d", &u_sel) != 1) {
			printf("Неверное введенное значение, попробуйте еще: ");
			while (getchar() != '\n');
		}

		switch (u_sel)
		{
		case 1: mass_val(a);
			Sort_bubble(a);
			for (int i = 0; i < 27; i++) printf("%.3lf\n", a[i]);
			File_W(a);
			break;

		case 2:
			mass_val(a);
			Sort_option(a);
			File_W(a);
			break;

		case 3:
			File_R();
			break;

		case 4:
			mass_val(a);
			BinaryW_F(a);
			break;

		case 5:
			if (argc!=2)
			{
				printf("Формат запуска программы\n \"%s file\"\n где file - имя выводимого на экран файла\n", argv[0]);
				exit(1);
			}

			if ((data_file = fopen("DATA_binary", "rb")) == NULL)
			{
				printf("Невозможно открыть файл %s\n", argv[1]);
				exit(2);
			}
			else
			{
				BinaryW_R(a, data_file);
			}
			break;

		case 0:
			printf("Завершение процесса.");
			return 0;
		}
	}
}
