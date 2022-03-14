#include<stdio.h>

/**
 * main -prints the size of various types
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a = sizeof(char);
	int b = sizeof(int);
	int c = sizeof(long int);
	int d = sizeof(long long int);
	int e = sizeof(float);

	printf("size of a char: %d byte(s)\n", a);
	printf("size of an int: %d byte(s)\n", b);
	printf("size of a long int: %d byte(s)\n", c);
	printf("size of a long long int: %d byte(s)\n", d);
	printf("size of a float: %d bytes(s)\n", e);
	printf("\n");
	return (0);
}
