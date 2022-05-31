#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**main - prints random password
 *
 * Return: 0
 */

int main (void)
{
	int myrandpass;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count ++)
	{
		myrandpass = (rand() % 125) + 1;
		printf("%c", myrandpass);
		total -= myrandpass;
	}
	printf("%c", total);

	return (0);
}
