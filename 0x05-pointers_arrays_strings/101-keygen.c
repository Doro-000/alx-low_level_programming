#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIMIT 89

/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */
int main (void)
{
	char password[8], string[LIMIT] = "ABCDEFGHIJKLMOPQRSTUVWXYZabcdefghijklmopqrstuvwxyz0123456789~`!@#$%^&*()_-+={}[]:;<>,./?";
	int random_num, loop_var;
	long t;

	t = time(NULL);
	srand(t);
	for (loop_var = 0; loop_var < 8; loop_var++)
	{
		random_num = rand() % LIMIT;
		password[loop_var] = string[random_num];
	}
	password[8] = '\0';
	printf("%s\n", password);
	return (0);
}
