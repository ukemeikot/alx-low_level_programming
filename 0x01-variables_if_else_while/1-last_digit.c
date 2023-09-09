#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
*main-the main code goes here
*Return: always 0
*/
/* betty style doc for function main goes there */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	/* your code goes there */
	if (m > 5)
	printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (m < 6 && m != 0)
	printf("Last digit of %d is %d and is less than 6\n", n, m);
	else
	printf("Last digit of %d is %d and is 0\n", n, m);
	return (0);
}
