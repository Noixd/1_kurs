#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "ru");
	system("chcp 1251 >null");

	int menu, quan = 0, i;
	struct dev_sample
	{
		char name_prod[22];
		char name_device[20];
		int freq;
		float diss_pw;
	};

	struct dev_sample dev_info[7] = { '0' };

	while (1) {
		printf("1. Ввод данных о микропроцессорах (от 1 до 7);\n");
		printf("2. Вывод количества введенных записей;\n");
		printf("3. Вывод всех введенных данных в виде отформатированной таблицы;\n");
		printf("4. Вывод определенной записи о микропроцессоре по ее порядковому номеру в базе;\n");
		printf("0. Выход из программы.\n");

		while (scanf("%d", &menu) != 1) {
			printf("Неверное введенное значение, попробуйте еще: ");
			while (getchar() != '\n');
		}

		switch (menu)
		{
		case 0: return 0;

		case 1:
			printf("Введите количество наименований: ");
			
			while (scanf("%d", &quan) != 1) {
				printf("Неверное введенное значение, попробуйте еще: ");
				while (getchar() != '\n');
			}
			for (i = 0; i < quan; i++) {

				printf("Название устройства:\n");
				while (scanf("%s", &dev_info[i].name_device) != 1) {
					printf("Неверное введенное значение, попробуйте еще: ");
					while (getchar() != '\n');
				}
				
				printf("Название производителя:\n");
				while (scanf("%s", &dev_info[i].name_prod) != 1) {
					printf("Неверное введенное значение, попробуйте еще: ");
					while (getchar() != '\n');
				}
				
				printf("Тактовая частота (МГц):\n"); 
				while (scanf("%d", &dev_info[i].freq) != 1) {
					printf("Неверное введенное значение, попробуйте еще: ");
					while (getchar() != '\n');
				}

				printf("Рассеиваемая мощность (Вт):\n");
				while (scanf("%f", &dev_info[i].diss_pw) != 1) {
					printf("Неверное введенное значение, попробуйте еще: ");
					while (getchar() != '\n');
				}
			}
			break;

		case 2:
			if (quan < 1) {
				printf("Вначале введите данные!\n");
				break;
			}
			else {
				printf("Количество наименований в базе: %d\n", quan);
			}
			break;

		case 3:
			printf("\n\t\tТАБЛИЦА НАИМЕНОВАНИЙ\n");
			printf("| Название\t| Производитель\t| Частота (МГц)\t| Рассеиваемая мощность (Вт)\t|\n");
			i = 0;
			while (i < 7) {
				printf("|\t%s\t|\t%s\t|\t%d\t|\t%5.1f\t\t\t|\n", dev_info[i].name_device, dev_info[i].name_prod, dev_info[i].freq, dev_info[i].diss_pw);
				i++;
			}
			break;

		case 4:
			printf("Введите номер наименования в базе: ");
			while (scanf("%d", &quan) != 1) {
				printf("Неверное введенное значение, попробуйте еще: ");
				while (getchar() != '\n');
			}
				printf("\n| Название\t| Производитель\t| Частота (МГц)\t| Рассеиваемая мощность (Вт)\t|\n");
				printf("|\t%s\t|\t%s\t|\t%d\t|\t%5.1f\t\t\t|\n\n", dev_info[quan - 1].name_device, dev_info[quan - 1].name_prod, dev_info[quan - 1].freq, dev_info[quan - 1].diss_pw);
				break;
			
		}
	}
}
