#include <stdio.h>
#include <string.h>

char	*pointer(char *s, char c)
{
	while (*s != c)
	{
		++s;
	}
	return (s);
}

int main()
{
	int a = -1;
	int b = 5;

	b = a / 10;
	printf("%d\n", b);
	return 1;
}
