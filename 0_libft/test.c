#include <stdio.h>
#include <stdint.h> 
#include <limits.h>
#include <stdlib.h> 
#include <string.h>

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_toupper(int c)
{
	printf("\nincom c = %d\n", c);
	if (ft_isalpha(c))
		c |= 32;	
	printf("\nafter c = %d\n", c);
	return (c);
}

static int	ft_isspace(int c)
{
	if (c == '\n' || c == '\t' || c == ' ' ||
			c == '\f' || c == '\r' || c == '\v')
		return (1);
	return (0);
}

int			ft_atoi(const char *nptr)
{
	unsigned long long	result;
	int					is_negative;

	result = 0;
	is_negative = 0;
	while (*nptr != '\0' && ft_isspace(*nptr))
		++nptr;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			is_negative = 1;
		++nptr;
	}
	while (*nptr != '\0' && *nptr == '0')
		++nptr;
	while (*nptr != '\0' && *nptr >= '0' && *nptr <= '9'
		&& result <= LLONG_MIN)
		result = result * 10 + *nptr++ - '0';
	if (result > LLONG_MAX && !is_negative)
		return (-1);
	else if (result > LLONG_MIN && is_negative)
		return (0);
	return (is_negative ? -1 * (long long)result : (long long)result);
}

int main()
{
	char a = 'a';
	char b = 'B';

	a = ft_toupper(a);
	b = ft_toupper(b);

	printf("%d\n", a);
	printf("%d\n", b);

	printf("------------------\n");
	unsigned long long alpha = LLONG_MAX;
	printf("%lld\n", alpha);
	int num = atoi("-0004324");
	printf("%d\n", num);
	num = atoi("922337203685477580");
	printf("atoi = %d\n", num);

	num = ft_atoi("9223372036854775807");

	printf("f_atoi = %d\n", num);
	
	char *p = (char*)malloc(sizeof(char) * 3);
	p[0] = 'a';
	p[1] = 'b';
	p[2] = '\0';
	printf("%s", p);
}
