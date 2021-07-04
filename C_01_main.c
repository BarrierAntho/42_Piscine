#include <stdio.h>

#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
//#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c"

int	main(void)
{
	printf("Ex00\n");
	int	n0;
	n0 = 0;
	int	*ptr0;
	ptr0 = &n0;
	ft_ft(ptr0);
	printf("%d\n", *ptr0);
	printf("\n");

//////////////////////////////////////////////////
	printf("Ex01\n");
	int	n1;
	n1 = 0;
	int	*********ptr19;
	int	********ptr18;
	int	*******ptr17;
	int	******ptr16;
	int	*****ptr15;
	int	****ptr14;
	int	***ptr13;
	int	**ptr12;
	int	*ptr11 = &n1;
	ptr19 = &ptr18;
	ptr18 = &ptr17;
	ptr17 = &ptr16;
	ptr16 = &ptr15;
	ptr15 = &ptr14;
	ptr14 = &ptr13;
	ptr13 = &ptr12;
	ptr12 = &ptr11;

	printf("ptr19 : %d\n", *********ptr19);
	printf("n1 : %d\n", *********ptr19);
	ft_ultimate_ft(ptr19);
	printf("ptr19 : %d\n", *********ptr19);
	printf("n1 : %d\n", *********ptr19);
	printf("\n");

//////////////////////////////////////////////////
/*	printf("Ex02\n");
	int	n21;
	n21 = 42;
	int	n22;
	n22 = 24;
	int	*ptr21;
	ptr21 = &n21;
	int	*ptr22;
	ptr22 = &n22;
	printf("ptr21 : %d\nptr22 : %d\n", *ptr21, *ptr22);
	ft_swap(ptr21, ptr22);
	printf("ptr21 : %d\nptr22 : %d\n", *ptr21, *ptr22);
	printf("\n");
*/
//////////////////////////////////////////////////
	printf("Ex03\n");
	int	n31, n32;
	n31 = 10;
	n32 = 7;
	int result, res_mod;
	result = 0;
	res_mod = 0;
	int *ptr31, *ptr32;
	ptr31 = &result;
	ptr32 = &res_mod;
	printf("a = %d et b = %d\n", n31, n32);
	ft_div_mod(n31, n32, ptr31, ptr32);
	printf("resultat = %d\nmod = %d\n", *ptr31, *ptr32);
	printf("\n");

//////////////////////////////////////////////////
	printf("Ex04\n");
	int	n41, n42;
	n41 = 10;
	n42 = 7;
	int	*ptr41, *ptr42;
	ptr41 = &n41;
	ptr42 = &n42;
	printf("a = %d et b = %d\n", *ptr41, *ptr42);
	ft_ultimate_div_mod(ptr41, ptr42);
	printf("resultat = %d\nmod = %d\n", *ptr41, *ptr42);
	printf("\n");

//////////////////////////////////////////////////
	printf("Ex05\n");
	char	*txt5 = "Hello World !";
	printf("Texte en entree : \n%s\n", txt5);
	printf("Texte en sortie : \n");
	ft_putstr(txt5);
	printf("\n\n");

//////////////////////////////////////////////////
	printf("Ex06\n");
	char	*txt6 = "Hello";
	printf("%s\n", txt6);
	printf("len = %d\n", ft_strlen(txt6));
	printf("\n");

//////////////////////////////////////////////////
	printf("Ex7\n");
	int	tab71[] = {10, 20, 30, 40};
	int	tab71_size = 4;
	int	i71 = 0;
	while (i71 < tab71_size)
	{
		printf("\ttab[%d] = %d", i71, tab71[i71]);
		i71++;
	}
	printf("\n");
	ft_rev_int_tab(tab71, 4);
	i71 = 0;
	while (i71 < tab71_size)
	{
		printf("\ttab[%d] = %d", i71, tab71[i71]);
		i71++;
	}
	printf("\n");

	int	tab72[] = {10, 20, 30, 40, 50};
	int	tab72_size = 5;
	int	i72 = 0;
	while (i72 < tab72_size)
	{
		printf("\ttab[%d] = %d", i72, tab72[i72]);
		i72++;
	}
	printf("\n");
	ft_rev_int_tab(tab72, 5);
	i72 = 0;
	while (i72 < tab72_size)
	{
		printf("\ttab[%d] = %d", i72, tab72[i72]);
		i72++;
	}

	printf("\n");

//////////////////////////////////////////////////
	printf("Ex8\n");
	int	tab81[] = {1, -6, 0, 0, 15, 2};
	int	tab81_size = 6;
	int	i81 = 0;
	while (i81 < tab81_size)
	{
		printf("\ttab[%d] = %d", i81, tab81[i81]);
		i81++;
	}
	printf("\n");

	ft_sort_int_tab(tab81, 6);

	i81 = 0;
	while (i81 < tab81_size)
	{
		printf("\ttab[%d] = %d", i81, tab81[i81]);
		i81++;
	}
	printf("\n");
//////////////////////////////////////////////////

	return (0);
}
