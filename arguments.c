#include <stdio.h>

/**
 * main - prints the arguments supplied
 *
 * Return: Always 0.
*/

int main(int ac, char **av)
{
	int i = 1;

	while (av[i])
	{
		printf("argument %d is : %s\n", i, av[i]);
		i++;
	}
}
