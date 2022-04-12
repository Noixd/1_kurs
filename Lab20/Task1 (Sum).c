#include <stdio.h>
#include <locale.h>
#include <math.h>

long long int f_rec(int n) {
	long long int rl;
	if (n > 1)
	{
		return rl = (5 * n) - f_rec(n - 1);
	}
	else
	{
		return 1;
	}
}

int main(void)
{
	setlocale(LC_ALL, "ru");

	int n;
	long long int res;

	printf("Введите n (n > 1): ");
	scanf("%d", &n);

	res = f_rec(n);

	printf("Результат вычислений при n = %d: %lld", n, res);

	return 0;

}
