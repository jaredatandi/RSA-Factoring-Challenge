#include <stdio.h>
#include <stdlib.h>

#define RED "\e[0:31m"

/**
 * main - entry point for the code
 * @argc: the number of arguments
 * @argv: vector array of the arguments
 * Description: a function to perform factorization
 * Return: 0 if succes, 1 if error
 */

int main(int argc, char *argv[])
{
	char *f;

	if (argc != 2)
	{
		printf("usage %s <file>\n", argc[0]);
		return (1);
	}

	f = fopen(argv[1], "r");

	if (!f)
	{
		fprintf(stderr, RED "file cannot be opened");
		return (1);
	}
	return (0);
}
