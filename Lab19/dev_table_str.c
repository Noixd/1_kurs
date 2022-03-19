#include "Header.h"

void Table_str(struct dev_sample* dev_info) {

	int quan;

	printf("\nВы выбрали вывод определенной записи о устройтве, по ее порядковому номеру в базе\n");
	printf("Введите номер наименования в базе: ");

	while (scanf("%d", &quan) != 1) {
		printf("Неверное введенное значение, попробуйте еще: ");
		while (getchar() != '\n');
	}

	printf("\n| Название\t| Производитель\t| Частота (МГц)\t| Рассеиваемая мощность (Вт)\t|\n");
	printf("|\t%s\t|\t%s\t|\t%d\t|\t%5.1f\t\t\t|\n\n", dev_info[quan - 1].name_device, dev_info[quan - 1].name_prod, dev_info[quan - 1].freq, dev_info[quan - 1].diss_pw);
}
