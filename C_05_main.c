#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

// Ex00
int ft_iterative_factorial(int nb);
// Ex01
int ft_recursive_factorial(int nb);
// Ex02
int ft_iterative_power(int nb, int power);
// Ex03
int ft_recursive_power(int nb, int power);
// Ex04
int ft_fibonacci(int index);
// Ex05
int ft_sqrt(int nb);

int	main(void)
{
	printf("MISC item :\nINT_MIN : %d\nINT_MAX : %d\n", INT_MIN, INT_MAX);

	printf("###############################\n");
	printf("Ex00\n");

/*	factorial		result
 *	0				1
 *	1				1
 *	2				2
 *	3				6
 *	4				24
*/

	int	nb001 = -2147483648;
	int	nb002 = 1;
	int	nb003 = 2;

	printf("Factorial of %d = %d\n", nb001, ft_iterative_factorial(nb001));
	printf("Factorial of %d = %d\n", nb002, ft_iterative_factorial(nb002));
	printf("Factorial of %d = %d\n", nb003, ft_iterative_factorial(nb003));

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex01\n");

/*	factorial		result
 *	0				1
 *	1				1
 *	2				2
 *	3				6
 *	4				24
	start with 1
 *	1 != 1 * (1 - 1) > 0  ==> false ==> return 1
 *
 * 	start with 2
 * 	2 != 2 * (2 - 1) > 0 ==> true	==> return 2
 *
 * 	start with 3
 * 	3 != 3 * (3 - 1) && (3 - 1) > 0 ==> true
 * 	==> recursive ft_rec_fac(3 - 1) * ft_rec_fac(3 - 2)
 *	start a with 2
 *	2 != 2 * (2 - 1) && (2 - 1) > 0 ==> true	==> stop with return 2
 *	start b with 1
 *	1 != 1 * (1 - 1) && (1 - 1) > 0 ==> false	==> stop with return 1
*/
	int	nb011 = -2147483648;
	int	nb012 = 1;
	int	nb013 = 2;

	printf("Factorial of %d = %d\n", nb011, ft_recursive_factorial(nb011));
	printf("Factorial of %d = %d\n", nb012, ft_recursive_factorial(nb012));
	printf("Factorial of %d = %d\n", nb013, ft_recursive_factorial(nb013));

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex02\n");

	int	pow021 = 4;

	int	nb021 = -1;
	int	nb022 = 0;
	int	nb023 = -3;

	printf("Power of %d = %d\n", nb021, ft_iterative_power(nb021, pow021));
	printf("Power of %d = %d\n", nb022, ft_iterative_power(nb022, pow021));
	printf("Power of %d = %d\n", nb023, ft_iterative_power(nb023, pow021));

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex03\n");

//	data from ex02 used

//	int	pow031 = -1;

//	int	nb031 = -1;
//	int	nb032 = 0;
//	int	nb033 = -3;

	printf("Power of %d = %d\n", nb021, ft_recursive_power(nb021, pow021));
	printf("Power of %d = %d\n", nb022, ft_recursive_power(nb022, pow021));
	printf("Power of %d = %d\n", nb023, ft_recursive_power(nb023, pow021));

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex04\n");

/*	Fx		result
 *	0		0
 *	1		1
 *	2		1
 *	3		2
 *	4		3
 *	5		5
 *	6		8
*/

	int	nb041 = -1;
	int	nb042 = 0;
	int	nb043 = 1;
	int	nb044 = 2;
	int	nb045 = 6;

	printf("Fibonacci de %d = %d\n", nb041, ft_fibonacci(nb041));
	printf("Fibonacci de %d = %d\n", nb042, ft_fibonacci(nb042));
	printf("Fibonacci de %d = %d\n", nb043, ft_fibonacci(nb043));
	printf("Fibonacci de %d = %d\n", nb045, ft_fibonacci(nb045));

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex05\n");


	printf("\n");

//////////////////////////////////////////////////
	return (0);
}
