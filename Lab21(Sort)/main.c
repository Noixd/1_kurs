#include "Header.h"

int main(void) {

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	double a[27];
	int u_sel;

	printf("1. Пузырьковая сортировка;\n");
	printf("2. Сортировка выбором;\n");
	printf("0. Выход из программы.\n");

	while (1) {
		while (scanf("%d", &u_sel) != 1 || u_sel < 0 || u_sel > 7) {
			printf("Неверное введенное значение, попробуйте еще: ");
			while (getchar() != '\n');
		}

		switch (u_sel)
		{
		case 1: mass_val(a);
			Sort_bubble(a);
			for (int i = 0; i < 27; i++) printf("%.3lf\n", a[i]);
			break;

		case 2:
			mass_val(a);
			Sort_option(a);
			break;

		case 0:
			printf("Завершение процесса.");
			return 0;
		}
	}
}
