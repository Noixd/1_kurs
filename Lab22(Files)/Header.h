#pragma once

#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>

void Sort_bubble(double* a);
void Sort_option(double* a);
void File_W(double* a);
void File_R(void);
void BinaryW_F(double* a);
void BinaryW_R(double* a, FILE* data_file);
void mass_val(double* a);

#endif
