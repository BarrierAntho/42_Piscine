#include <stdio.h>
#include <string.h>
#include <limits.h>

/*
#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"
#include "ex10/ft_strlcpy.c"
*/
#include "ex11/ft_putstr_non_printable.c"
//#include "ex12/ft_print_memory.c"

int	main(void)
{
/*
	int it = -128;
	while (it <= 127)
	{
		printf("Char : %c ==> ascii : %d\n", it, it);
		it++;
	}
	printf("\n");

	printf("Ex00\n");

	char	txt01[] = "Bon";
	char	txt02[] = "Hello";
	char	*result01;

	printf("Test official strcpy.c\ntxt src = %s\ntxt dest = %s\n", txt01, txt02);
	result01 = strcpy(txt02, txt01);
	printf("Test official strcpy.c\ntxt src = %s\ntxt dest = %s\n", txt01, txt02);
	printf("result = %s\n", result01);

	printf("-------------------\n");
	char	txt03[] = "Bon";
	char	txt04[] = "Hello";
	char	*result02;

	printf("Test ft_strcpy.c\ntxt src = %s\ntxt dest = %s\n", txt03, txt04);
	result02 = ft_strcpy(txt04, txt03);
	printf("Test ft_ strcpy.c\ntxt src = %s\ntxt dest = %s\n", txt03, txt04);
	printf("result = %s\n", result02);

	printf("\n");

//////////////////////////////////////////////////
	printf("Ex01\n");

	char	txt11[] = "Bon";
	char	txt12[] = "Hello";
	char	*result11;
	unsigned int uns_int11 = 5;

	printf("Test official strncpy.c\ntxt src = %s\ntxt dest = %s\n", txt11, txt12);
	result11 = strncpy(txt12, txt11, uns_int11);
	printf("Test official strncpy.c\ntxt src = %s\ntxt dest = %s\n", txt11, txt12);
	printf("result = %s\n", result11);

	printf("-------------------\n");
	char	txt13[] = "Bon";
	char	txt14[] = "Hello";
	char	*result12;
	unsigned int uns_int12 = 5;

	printf("Test ft_strncpy.c\ntxt src = %s\ntxt dest = %s\n", txt13, txt14);
	result12 = ft_strncpy(txt14, txt13, uns_int12);
	printf("Test ft_ strncpy.c\ntxt src = %s\ntxt dest = %s\n", txt13, txt14);
	printf("result = %s\n", result12);

	printf("\n");

//////////////////////////////////////////////////
	printf("Ex02\n");

	char	txt21[] = "AWERTYZaqwertyz";
	printf("text : %s\n", txt21);
	printf("result : %d\n", ft_str_is_alpha(txt21));

	printf("\n");

//////////////////////////////////////////////////
	printf("Ex03\n");

	char	txt31[] = "1234567890";
	printf("text : %s\n", txt31);
	printf("result : %d\n", ft_str_is_numeric(txt31));

	printf("\n");

//////////////////////////////////////////////////
	printf("Ex04\n");

	char	txt41[] = "aqwertyz";
	printf("text : %s\n", txt41);
	printf("result : %d\n", ft_str_is_lowercase(txt41));

	printf("\n");

//////////////////////////////////////////////////
	printf("Ex05\n");

	char	txt51[] = "AQWERTYZ";
	printf("text : %s\n", txt51);
	printf("result : %d\n", ft_str_is_uppercase(txt51));

	printf("\n");

//////////////////////////////////////////////////
	printf("Ex06\n");

	char	txt61[] = "~Hello World! ~";
	printf("text : %s\n", txt61);
	printf("result : %d\n", ft_str_is_printable(txt61));

	printf("\n");

	char	txt62[] = "™£¢∞§¶•\nªº";
	printf("text : %s\n", txt62);
	printf("result : %d\n", ft_str_is_printable(txt62));

	printf("\n");

//////////////////////////////////////////////////
	printf("Ex7\n");

	char	txt71[] = "cvgbhnjks34567#$%^U455bfvvnmn23e1231";
	printf("text : %s\n", txt71);
	printf("result : %s\n", ft_strupcase(txt71));

	printf("\n");

//////////////////////////////////////////////////
	printf("Ex8\n");

	char	txt81[] = "dvbds@#$%^gdBCSFD|D12EREbiff";
	printf("text : %s\n", txt81);
	printf("result : %s\n", ft_strupcase(txt81));

	printf("\n");

//////////////////////////////////////////////////
	printf("Ex9\n");

	char	txt91[] = "salUt, comMent tu vAs ? 42Mots quarante-deux; cinquante+et+un";
	printf("text : %s\n", txt91);
	printf("result : %s\n", ft_strcapitalize(txt91));

	char	txt92[] = " 42 nuancEs DE code";
	printf("text : %s\n", txt92);
	printf("result : %s\n", ft_strcapitalize(txt92));

	char	txt93[] = "42TEam";
	printf("text : %s\n", txt93);
	printf("result : %s\n", ft_strcapitalize(txt93));

	printf("\n");

//////////////////////////////////////////////////
	printf("Ex10\n");

	char	txt101[] = "Hello";
	char	txt102[10] = {0};
	int		size101 = 4;
	int		result101 = 0;
	printf("txt src : %s\ntxt dest : %s\n", txt101, txt102);
	result101 = strlcpy(txt102, txt101, size101);
	printf("txt src : %s\ntxt dest : %s\nresult : %d\n", txt101, txt102, result101);

	printf("-------------------\n");
	char	txt103[] = "Hello";
	char	txt104[10] = {0};
	int		size103 = 4;
	int		result103 = 0;
	printf("txt src : %s\ntxt dest : %s\n", txt103, txt104);
	result103 = ft_strlcpy(txt104, txt103, size103);
	printf("txt src : %s\ntxt dest : %s\nresult : %d\n", txt103, txt104, result103);

	printf("\n");
*/
//////////////////////////////////////////////////
	printf("Ex11\n");

	// chr		Dec		Hex
	// del		127		7f
	// nul		0		00
	// us		31		1f
	//
	unsigned int test_i = 156;
	printf("test : %c\n", test_i);

	char	txt111[] = "Coucou\ntu vas bien ?";
	printf("Original text : %s\n", txt111);
	ft_putstr_non_printable(txt111);

	printf("\n-------------------\n");

	char	txt112[] = "\x81\xbe";
	printf("\n\\81\\be:\n");
	ft_putstr_non_printable(txt112);;

	printf("\n-------------------\n");

	char	txt113[] = "£";
	printf("Original text : %s\n", txt113);
	ft_putstr_non_printable(txt113);

	printf("\n");

//////////////////////////////////////////////////
	printf("Ex12\n");
/*
	char	txt121[] = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	printf("Text :\n%s\n", txt121);

	void	*ptr121;
	void	*addr121 = txt121;
	unsigned int	size121 = 32;

	ptr121 = ft_print_memory(addr121, size121);
*/
	return (0);
}
