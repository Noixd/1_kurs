#include "Header.h"

void Slv_dev(struct dev_sample* dev_info, int quan) {

	printf("\nВы выбрали вывод самого медленного утройства в базе данных\n");


	int min_fq = dev_info[0].freq;
	int num_list = 0;

	if (quan < 1) {
		printf("Вначале введите данные!\n");
	}
	else
	{
		for (int i = 0; i < quan; i++)
		{
			if (min_fq > dev_info[i].freq) {
				min_fq = dev_info[i].freq;
				num_list = i;
			}
		}
		printf("Самое медленное устройство - %s, с частототой %4d МГц\n", dev_info[num_list].name_device, min_fq);
	}
}
