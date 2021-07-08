#include <stdio.h>
#include <string.h>
#include <limits.h>

// Ex00
int	ft_strcmp(char *s1, char *s2);
// Ex01
int	ft_strncmp(char *s1, char *s2, unsigned int n);
// Ex02
char	*ft_strcat(char *dest, char *src);
//Ex03
char	*ft_strncat(char *dest, char *src, unsigned int nb);
//Ex04
char	*ft_strstr(char *str,char *to_find);
//Ex05
//unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	printf("###############################\n");
	printf("Ex00\n");

//	s1		s2		result
//	a		a		0
//	a		b		-1
//	b		a		1
//	ac		a		99
//	a		ac		-99

	char	txt001[] = "\n";
	char	txt002[] = "1\n";
	printf("txt src : %s\ntxt dest : %s\n", txt001, txt002);
	printf("ORIGINAL : %d\n", strcmp(txt001, txt002));

	printf("-------------------\n");

	char	txt003[] = "\n";
	char	txt004[] = "1\n";
	printf("txt src : %s\ntxt dest : %s\n", txt003, txt004);
	printf("myfunc : %d\n", ft_strcmp(txt003, txt004));

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex01\n");

//	s1		s2		result
//	a		a		0
//	a		b		-1
//	b		a		1
//	ac		a		99
//	a		ac		-99

	char	txt011[] = "ab";
	char	txt012[] = "abc";
	unsigned int	size11 = 20;
	printf("txt src : %s\ntxt dest : %s\n", txt011, txt012);
	printf("ORIGINAL : %d\n", strncmp(txt011, txt012, size11));

	printf("-------------------\n");

	char	txt013[] = "ab";
	char	txt014[] = "abc";
	unsigned int	size13 = 20;
	printf("txt src : %s\ntxt dest : %s\n", txt013, txt014);
	printf("myfunc : %d\n", ft_strncmp(txt013, txt014, size13));

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex02\n");

	char	txt021[15] = "Hello";
	const char	txt022[] = "World";
	printf("txt src : %s\ntxt dest : %s\n", txt021, txt022);
	printf("ORIGINAL : %s\n", strcat(txt021, txt022));

	printf("-------------------\n");

	char	txt023[5] = "Hello";
	char	txt024[] = "World";
	printf("txt src : %s\ntxt dest : %s\n", txt023, txt024);
	printf("myfunc : %s\n", ft_strcat(txt023, txt024));

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex03\n");

//	dest		src			size		n		result
//	Hello		World		6			2		error abort
//	Hello		World		10			2		HelloWo
//	Hello		World		10			5		error abort
//	Hello		World		11			5		HelloWorld

	char	txt031[15] = "Hello";
	char	txt032[] = "World";
	unsigned int	size31 = 8;
	printf("txt src : %s\ntxt dest : %s\n", txt031, txt032);
	printf("ORIGINAL : %s\n", strncat(txt031, txt032, size31));

	printf("-------------------\n");

	char	txt033[15] = "Hello";
	char	txt034[] = "World";
	unsigned int	size33 = 8;
	printf("txt src : %s\ntxt dest : %s\n", txt033, txt034);
	printf("myfunc : %s\n", ft_strncat(txt033, txt034, size33));

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex04\n");

//	char	*ptr041 = 0;
//	printf("Test : pointeur %p\tchar = %s\n", ptr041, ptr041);

//	txt						to find		pointer		value of first char
//	Hello 42 World						0x7fgfgfgf		Hello 42 World
//	Hello 42 World			42			0x7abababa		42 World
//	Hello 42 World			World		0x7cdcdcdc		World
//	Hello 42 World			world		0x0				(null)
//	Hello					People		0x0			(null)

	char	txt041[15] = "Hello 42 World";
	char	txt042[] = "lo";
	char	txt043[] = "l";
	char	txt044[] = "";
	char	txt045[] = "WorldOfWarcraft";
	printf("txt src : %s\ntxt dest : %s\n", txt041, txt042);
	printf("ORIGINAL : pointeur = %p\tchar = %s\n", strstr(txt041, txt042), strstr(txt041, txt042));
	printf("txt src : %s\ntxt dest : %s\n", txt041, txt043);
	printf("ORIGINAL : pointeur = %p\tchar = %s\n", strstr(txt041, txt043), strstr(txt041, txt043));
	printf("txt src : %s\ntxt dest : %s\n", txt041, txt044);
	printf("ORIGINAL : pointeur = %p\tchar = %s\n", strstr(txt041, txt044), strstr(txt041, txt044));
	printf("txt src : %s\ntxt dest : %s\n", txt041, txt045);
	printf("ORIGINAL : pointeur = %p\tchar = %s\n", strstr(txt041, txt045), strstr(txt041, txt045));

	printf("-------------------\n");

	printf("txt src : %s\ntxt dest : %s\n", txt041, txt042);
	printf("myfunc : pointeur = %p\tchar = %s\n", ft_strstr(txt041, txt042), strstr(txt041, txt042));
	printf("txt src : %s\ntxt dest : %s\n", txt041, txt043);
	printf("myfunc : pointeur = %p\tchar = %s\n", ft_strstr(txt041, txt043), strstr(txt041, txt043));
	printf("txt src : %s\ntxt dest : %s\n", txt041, txt044);
	printf("myfunc : pointeur = %p\tchar = %s\n", ft_strstr(txt041, txt044), strstr(txt041, txt044));
	printf("txt src : %s\ntxt dest : %s\n", txt041, txt045);
	printf("myfunc : pointeur = %p\tchar = %s\n", ft_strstr(txt041, txt045), strstr(txt041, txt045));

	printf("\n");

//////////////////////////////////////////////////
	printf("###############################\n");
	printf("Ex05\n");

	printf("\n");

//////////////////////////////////////////////////
	return (0);
}
