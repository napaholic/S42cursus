/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   databasket.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjay <jaewkim@student.42seoul.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 05:36:11 by mjay              #+#    #+#             */
/*   Updated: 2020/12/27 06:44:10 by mjay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>



int main()

{
	char a[10] = {0, -32, -53, 65, 97, 150, -65, 4, 6, 7};
	char *p;
	unsigned char cmp = 150;
	int num = 0;
	int cmpnum;
	int count = 8;
	int fullcount = 70;
	int cmpbit = 1;

	printf("--------------------------------------\n");
	while(fullcount--)
	{
		a[5] & cmpbit ? (printf("1")):(printf("0"));
		cmpbit = cmpbit << 1;
	}
	printf("--------------------------------------\n");
	fullcount = 70;
	cmpbit = 1;
	while(fullcount--)
	{
		cmp & cmpbit ? (printf("1")):(printf("0"));
        cmpbit = cmpbit << 1;
	}

	p = a;
	printf ("\n-- General Data Type Size --\n");

	printf ("char size : %d byte\n", (int)sizeof(char));

	printf ("unsigned char : %d byte\n", (int)sizeof(unsigned char));

	printf ("short size : %d byte\n", (int)sizeof(short));

	printf ("int size : %d byte\n", (int)sizeof(int));

	printf ("long size : %d byte\n", (int)sizeof(long));

	printf ("double size : %d byte\n", (int)sizeof(double));

	printf ("long double size : %d byte\n", (int)sizeof(long double));
	
	printf ("long long size: %d byte\n", (int)sizeof(long long));


	printf ("\n-- Pointer Data Type Size -- \n");

	printf ("char* size : %d byte\n", (int)sizeof(char*));

    printf ("short* size : %d byte\n", (int)sizeof(short*));

	printf ("int* size : %d byte\n", (int)sizeof(int*));

	printf ("long* size : %d byte\n", (int)sizeof(long*));

	printf ("double* size : %d byte\n", (int)sizeof(double*));

	printf ("long double* size : %d byte\n", (int)sizeof(long double*));

	printf("&a = 0x%08X\n", &a);
	
	while (num++ < 9)
	{
		*p == cmp ? (cmpnum = 1): (cmpnum = 0);
		printf("&a[%d] = 0x%08X\n", num, p);
		printf("cmp = %d\n", cmpnum);
		p++;
	}

	return 0;

} 
