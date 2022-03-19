#include "Header.h"

bool  Chk_list(int *quan) {
	printf("\nВы выбрали вывод количества введенных записей\n");

	if (*quan < 1) {
		printf("Вначале введите данные!\n");
		return false;
		}
	else {
		printf("Количество наименований в базе: %d\n", *quan);
		return true;
	}
}
