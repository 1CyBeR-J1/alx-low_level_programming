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

	printf("size of char: %d byte(s)\n", a);
	printf("size of int: %d byte(s)\n", b);
	printf("size of long int: %d byte(s)\n", c);
	printf("size of long long int: %d byte(s)\n", d);
	printf("size of float: %d bytes(s)\n", e);

	return (0);
}
