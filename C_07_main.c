#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>

// Ex00
char *ft_strdup(char *src);
// Ex01
int *ft_range(int min, int max);
// Ex02
int ft_ultimate_range(int **range, int min, int max);
// Ex03
char *ft_strjoin(int size, char **strs, char *sep);
// Ex04
char *ft_convert_base(char *nbr, char *base_from, char *base_to);
// Ex05

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;

	printf("MISC item :\nINT_MIN : %d\nINT_MAX : %d\n", INT_MIN, INT_MAX);

	printf("###############################\n");
	printf("Ex00\n");

	#define EX00_S	5
	char	txt001[EX00_S][CHAR_MAX] = {"42", "Hello", "World", "", "toto"};
	char	*ptr001;
	char	*ptr002;
	int		i00 = 0;
	ptr001 = 0;
	ptr002 = 0;

	while (i00 < EX00_S)
	{
		printf("ORIGINAL : i_01 = %d\n", i00);
		printf("BEFORE : txt = %s\tptr = %s\n", txt001[i00], ptr001);
		ptr001 = strdup(txt001[i00]);
		printf("AFTER : txt = %s\tptr = %s\n", txt001[i00], ptr001);

		printf("------------------------------\n");

		printf("MYFUNC : i_01 = %d\n", i00);
		printf("BEFORE : txt = %s\tptr = %s\n", txt001[i00], ptr002);
		ptr002 = ft_strdup(txt001[i00]);
		printf("AFTER : txt = %s\tptr = %s\n", txt001[i00], ptr002);

		strcmp(ptr001, ptr002) == 0  ? printf("SUCCES\n") : printf("FAILED\n");

		i00++;

		printf("******************************\n******************************\n\n");
	}

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex01\n");

	#define EX01_S	5
	int	min01[EX01_S] = {0, 0, -10, 0, -20};
	int	max01[EX01_S] = {10, 1, 10, -5, -10};
	int	*ptr011;
	int	i01 = 0;
	int j01 = 0;
	ptr011 = 0;
	int	k01;

	while (i01 < EX01_S)
	{
		printf("BEFORE ptr = %p\n", ptr011);
		printf("min = %d\tmax = %d\n", min01[i01], max01[i01]);
		ptr011 = ft_range(min01[i01], max01[i01]);

		j01 = min01[i01];
		k01 = 0;
		while (j01 < max01[i01])
		{
			printf("nb = %d\n", ptr011[k01]);
			j01++;
			k01++;
		}

		i01++;
		printf("AFTER ptr = %p\n", ptr011);

		printf("******************************\n******************************\n\n");
	}

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex02\n");
	#define EX02_S	5
	int	min02[EX02_S] = {0, 0, -10, 0, -20};
	int	max02[EX02_S] = {10, 1, 10, -5, -10};
	int	*ptr021;
	int	res02 = 0;
	int	i02 = 0;
	int j02 = 0;
	ptr021 = 0;
	int	k02;

	while (i02 < EX02_S)
	{
		printf("BEFORE ptr = %p\n", ptr021);
		printf("min = %d\tmax = %d\n", min02[i02], max02[i02]);
		res02 = ft_ultimate_range(&ptr021, min02[i02], max02[i02]);

		j02 = min02[i02];
		k02 = 0;
		while (j02 < max02[i02])
		{
			printf("nb = %d\n", ptr021[k02]);
			j02++;
			k02++;
		}
		i02++;
		printf("AFTER ptr = %p\n", ptr021);
		printf("[main] res02 = %d\n", res02);

		printf("******************************\n******************************\n\n");
	}

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex03\n");
	#define EX03_S	6
//	char	str03[EX03_S][CHAR_MAX] = {"Hello", "World", "of", "Warcraft", "!", "End"};

	char	*res03;
	char	sep03[]	= "_";

	int		i03 = 0;
	while (i03 < argc)
	{
		printf("pointer txt = %p\ttxt03[%d] = %s\n", argv[i03], i03, argv[i03]);
		i03++;
	}

	res03 = ft_strjoin(argc, argv, sep03);
	printf("size = %d\tpointer res03 = %p\ttxt = %s\n", argc, &res03, res03);
	res03 = ft_strjoin(0, argv, sep03);
	printf("size = %d\tpointer res03 = %p\ttxt = %s\n", 0, &res03, res03);

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex04\n");

	#define EX04_TEST_S	8
	#define EX04_BASE_S	4
	char	txt04[EX04_TEST_S][CHAR_MAX] = {"0", "1", "5", "102", "42", "-42", "-2147483", "-2147483648"};
	char	base[EX04_BASE_S][CHAR_MAX] = {"0123456789", "01", "0123456789ABCDEF", "poneyvif"};

	int	i04 = 0;
	int	j04 = 0;
	while (i04 < EX04_TEST_S)
	{
		printf("char nbr = %s\n", txt04[i04]);
		j04 = 0;
		while (j04 < EX04_BASE_S)
		{
			printf("base_from = %s\tbase_to = %s\n", base[j04], "0");
			ft_convert_base(txt04[i04], base[j04], base[0]);
			j04++;
			printf("----------------------\n");
		}
		i04++;
		printf("@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@\n");
	}


	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex05\n");


	printf("\n");

//////////////////////////////////////////////////
	return (0);
}
