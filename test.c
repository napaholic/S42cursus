#include <stdio.h>

int main()
{
	int a = -2147483648;
	int alpha;
	int b = -12;
	int beta = 4;

	a *= (-1);
	printf("%04.4d\n", a);
	alpha = -123;
	alpha = -alpha;
	printf("%d\n", alpha);
	printf("%0*d", beta, b);
}
