#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

// Ex00
int	ft_strlen(char *str);
// Ex01
void	ft_putstr(char *str);
// Ex02
void	ft_putnbr(int nb);
// Ex03
int	ft_atoi(char *str);
// Ex04
void	ft_putnbr_base(int nbr, char *base);
// Ex05

int	main(void)
{
	printf("###############################\n");
	printf("Ex00\n");

	char	txt001[] = "abdcef";
	printf("ORIGINAL : txt : %s\nlen : %lu\n", txt001, strlen(txt001));

	printf("-------------------\n");

	printf("myfunc : txt : %s\nlen : %d\n", txt001, ft_strlen(txt001));

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex01\n");

	char	txt011[] = "abcdef";
	printf("myfunc :\n");
	write(1, "Ex01\n", 5);
	ft_putstr(txt011);
	write(1, "\n", 1);

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex02\n");

	int	nb021 = -42;

	printf("myfunc : %d\tresult :\n", nb021);
	write(1, "Ex02\n", 5);
	ft_putnbr(nb021);
	write(1, "\n", 1);
	printf("\n");

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex03\n");

//	char	txt031[] = " ---+--+1234ab567";
//	char	txt031[] = "+1234ab567";
//	char	txt031[] = "  \n  42t4457";
//	char	txt031[] = " --+-42sfs:f545";
//	char	txt031[] = "\0 1337";
//	char	txt031[] = "-0";
//	char	txt031[] = " - 1 3 2 5 6 3 2 1 6 7";
//	char	txt031[] = "-1325632167";
//	char	txt031[] = "-100";
//	char	txt031[] = "\t---+2147483648";
	char	txt031[] = "\v2147483647";

	printf("ORIGINAL : %s\tresult : %d\n", txt031, atoi(txt031));

	printf("-------------------\n");

	printf("myfunc : %s\tresult : %d\n", txt031, ft_atoi(txt031));

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex04\n");

//dec		binary			hexa		octal		result
//0			0				0			0			0
//1			1				1			1 (p)		p
//10		1010			A			12 (on)		(on)
//16		10000			0f			20 (

//	INT_MIN : -2147483648

	char base_dec[] = "0123456789";
	char base_bi[] = "01";
	char base_hex[] = "0123456789ABCDEF";
	char base_oc[] = "poneyvif";

//	char base_w[] = "";
//	char base_w[] = "0";
//	char base_w[] = "";
	char base_w[] = "+-0123456789ABCDEF";

	int	n041 = -2147483648;

	write(1, "Ex04\n", 5);
	write(1, "convert dec to dec\n", 19);
	ft_putnbr_base(n041, base_dec);
	write(1, "\nconvert dec to binary\n", 23);
	ft_putnbr_base(n041, base_bi);
	write(1, "\nconvert dec to hex\n", 20);
	ft_putnbr_base(n041, base_hex);
	write(1, "\nconvert dec to octal\n", 22);
	ft_putnbr_base(n041, base_oc);
	write(1, "\nconvert dec to WRONG base\n", 27);
	ft_putnbr_base(n041, base_w);
	write(1, "\n", 1);

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex05\n");

	printf("\n");

//////////////////////////////////////////////////
	return (0);
}
