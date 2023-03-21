#include <stdio.h>
/**
 *main - print out size of data typrs in C
 * code by bwave ict
 * Return: 0
 */
int main(void)
{
Char a;
	 int b;
	long  int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("size of a int: %lu bytes(S)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu bytes(S)\n", (unsigned long)sizeof(c));
	printf("size of a long long  int: %lu bytes(S)\n", (unsigned long)sizeof(d));
	printf("size of a float: %lu bytes(S)\n", (unsigned long)sizeof(f));
	return (0);
}
