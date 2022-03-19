#include "Header.h"

int main() {

	setlocale(LC_ALL, "ru");
	system("chcp 1251 >null");

	int menu = 0, quan = 0;
	
	struct dev_sample dev_info[7] = { '0' };
	
	while (1) {

		Sel_menu(&menu);

		switch (menu)
		{
		case 0:
			printf("Завершение процесса.");
			return 0;

		case 1:
			quan = Data_inp(dev_info);
			break;

		case 2:
			Chk_list(&quan);
			break;
			
		case 3:
			Table(dev_info, quan);
			break;

		case 4:
			Table_str(dev_info);
			break;

		case 5:
			Pow_dev(dev_info, quan);
			break;

		case 6: 
			Slv_dev(dev_info, quan);
			break;
		}
	}
}
