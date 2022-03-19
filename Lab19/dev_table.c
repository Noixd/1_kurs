#include "Header.h"

void Table(struct dev_sample *dev_info, int quan)
{
	int i = 0;
	printf("\n\t\tТАБЛИЦА НАИМЕНОВАНИЙ\n");
	printf("| Название\t| Производитель\t| Частота (МГц)\t| Рассеиваемая мощность (Вт)\t|\n");
	i = 0;
	while (i < 7) {
		printf("|\t%s\t|\t%s\t|\t%d\t|\t%5.1f\t\t\t|\n", dev_info[i].name_device, dev_info[i].name_prod, dev_info[i].freq, dev_info[i].diss_pw);
		i++;
	}
}
