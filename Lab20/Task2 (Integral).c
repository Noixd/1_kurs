#include <stdio.h>
#include <locale.h>
#include <math.h>

float integ(double a, double b, int n) {
	float res = 0;
	if (n > 2) {
		res = (((pow(cos(b), n--) * sin (b)) + (n--))/n) - (((pow(cos(a), n--) * sin(a)) + (n--)) / n) * integ(a, b, n-2);
		}
	else
	{
		if (n == 2) {
			res = (b / 2 + (sin(2 * b)) / 4) - (a / 2 + (sin(2 * a)) / 4);
		}
		else
		{
			if (n == 1)
			{
				res = sin(b) - sin(a);
			}
		}
	}
	return res;
}

int main(void) {

	setlocale(LC_ALL, "ru");

	double a, b;
	double intg;
	int n;

	printf("Введ ниж границ:");
	scanf("%lf", &a);

	printf("Введ верх границ:");
	scanf("%lf", &b);

	printf("Введ целое:");
	scanf("%d", &n);

	intg = integ(a, b, n);

	printf("res = %.3lf", intg);

	return 0;
}
