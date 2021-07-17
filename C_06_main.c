#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

// Ex00
char *ft_strdup(char *src);
// Ex01
int *ft_range(int min, int max);
// Ex02

// Ex03

// Ex04

// Ex05


int	main(void)
{
	printf("MISC item :\nINT_MIN : %d\nINT_MAX : %d\n", INT_MIN, INT_MAX);

	printf("###############################\n");
	printf("Ex00\n");

	#define EX00_S	4
	char	txt001[EX00_S][CHAR_MAX] = {"42", "Hello", "World", ""};
	char	*ptr001;
	char	*ptr002;
	int		i01 = 0;
	ptr001 = 0;
	ptr002 = 0;

	while (i01 < EX00_S)
	{
		printf("ORIGINAL : i_01 = %d\n", i01);
		printf("BEFORE : txt = %s\tptr = %s\n", txt001[i01], ptr001);
		ptr001 = strdup(txt001[i01]);
		printf("AFTER : txt = %s\tptr = %s\n", txt001[i01], ptr001);

		printf("------------------------------\n");

		printf("MYFUNC : i_01 = %d\n", i01);
		printf("BEFORE : txt = %s\tptr = %s\n", txt001[i01], ptr002);
		ptr002 = ft_strdup(txt001[i01]);
		printf("AFTER : txt = %s\tptr = %s\n", txt001[i01], ptr002);

		strcmp(ptr001, ptr002) == 0  ? printf("SUCCES\n") : printf("FAILED\n");

		i01++;

		printf("******************************\n******************************\n\n");
	}

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex01\n");

	#define EX01_S	3
	int	min[EX01_S] = {0, 0, -10, INT_MIN};
	int	max[EX01_S] = {10, 1, 10, INT_MAX};
	int	*ptr011;
	int	i02 = 0;
	int j02 = 0;
	ptr011 = 0;

	while (i02 < EX01_S)
	{

		printf("min = %d\tmax = %d\n", min[i02], max[i02]);

		ptr011 = ft_range(min[i02], max[i02]);
		j02 = 0;
		while (ptr011[j02])
		{
			printf("nb = %d\n", ptr011[j02]);
			j02++;
		}

		i02++;
		ptr011 = 0;

		printf("******************************\n******************************\n\n");
	}

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex02\n");


	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex03\n");


	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex04\n");


	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex05\n");


	printf("\n");

//////////////////////////////////////////////////
	return (0);
}
