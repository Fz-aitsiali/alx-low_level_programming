#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  adds positive numbers.
 * followed by a new line
 * @argc : an argument counter for char
 * @argv : an argument value for char
 * Return: 0 on success, 1on fail
 */
int main(int argc, char *argv[])
{
	int sum, num, digit;

	sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit] != '\0'; digit++)
		{
			if (!isdigit(argv[num][digit]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}
	printf("%d\n", sum);
	return (0);
}
