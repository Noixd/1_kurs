#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void Sel_menu(int *pmenu);
int Data_inp(struct dev_sample *);
bool Chk_list(int *quan);
void Table(struct dev_sample*, int quan);
void Table_str(struct dev_sample*);
void Pow_dev(struct dev_sample*, int quan);
void Slv_dev(struct dev_sample*, int quan);

struct dev_sample
{
	char name_prod[22];
	char name_device[20];
	int freq;
	float diss_pw;
};
#endif
