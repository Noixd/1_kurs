#include "Header.h"

void Pow_dev(struct dev_sample* dev_info, int quan) {
	float max_pv = 0; 
	int num_list = 0;
	printf("\nВы выбрали вывод самого мощного утройства в базе данных\n");
	max_pv = dev_info[0].diss_pw;
	if (quan < 1) {
		printf("Вначале введите данные!\n");
	}
	else
	{
		for (int i = 0; i < quan; i++)
		{
			if (max_pv < dev_info[i].diss_pw) {
				max_pv = dev_info[i].diss_pw;
				num_list = i;
			}
		}
		printf("Самое мощное устройство - %s, с мощностью %5.2f Вт\n", dev_info[num_list].name_device, max_pv);
	}
}
