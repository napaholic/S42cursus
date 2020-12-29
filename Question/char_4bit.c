#include <stdio.h>

int main(int ac, char **av)
{
	unsigned long long int	a = 18446744073709551613;
	int chk = 1;
	int cnt = 70;
	long long tmp1;
	unsigned long long tmp2;
	printf("\n==pure long long int a = %lld ==\n", a);
	tmp1 = (long long)a;
	tmp2 = (unsigned long long)a;
	printf("tmp1 : %lld\n", tmp1);
	printf("tmp2 : %lld\n", tmp2);
	
	printf("-----------------\n");
	while (cnt--)
	{
		chk & tmp1? printf("1"):printf("0");
		tmp1 = tmp1 >> 1;
	}
	chk = 1;
	cnt = 70;
	printf("\n");
	printf("-----------------\n");
	while (cnt--)
	{
		chk & tmp2? printf("1"):printf("0");
		tmp2 = tmp2 >> 1;
	}
	printf("\n-----------------\n");
	printf("%d", tmp1 == tmp2);

	printf("\n--------------------ddd--\n");
	char aa = 12;
	printf("\n--------------------aaa--\n");
	unsigned char bbb = 129;

	printf("%d\n", aa);
	printf("%d\n", bbb);
	printf("%d\n", aa == bbb);
}
