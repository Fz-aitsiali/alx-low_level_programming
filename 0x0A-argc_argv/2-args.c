#include <stdio.h>

/**
 * main - this is a function to print its name
 * @argc : an argument counter for char
 * @argv : an argument value for char
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
