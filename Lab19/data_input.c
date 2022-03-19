#include "Header.h"


int Data_inp(struct dev_sample *pdev_info) {
	int quan, i;

	printf("\nВы выбрали ввод данных о уcтройствах\n");
	printf("Введите количество наименований: ");

	while (scanf("%d", &quan) != 1) {
		printf("Неверное введенное значение, попробуйте еще: ");
		while (getchar() != '\n');
	}
	for (i = 0; i < quan; i++) {

		printf("Название устройства:\n");
		while (scanf("%s", pdev_info[i].name_device) != 1) {
			printf("Неверное введенное значение, попробуйте еще: ");
			while (getchar() != '\n');
		}

		printf("Название производителя:\n");
		while (scanf("%s", pdev_info[i].name_prod) != 1) {
			printf("Неверное введенное значение, попробуйте еще: ");
			while (getchar() != '\n');
		}

		printf("Тактовая частота (МГц):\n");
		while (scanf("%d", &pdev_info[i].freq) != 1) {
			printf("Неверное введенное значение, попробуйте еще: ");
			while (getchar() != '\n');
		}

		printf("Рассеиваемая мощность (Вт):\n");
		while (scanf("%f", &pdev_info[i].diss_pw) != 1) {
			printf("Неверное введенное значение, попробуйте еще: ");
			while (getchar() != '\n');
		}
	}

	return quan;
}
