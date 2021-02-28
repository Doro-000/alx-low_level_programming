#include "holberton.h"

/**
 * main - entry point, calls the get_change function
 * @argc: number of args passed
 * @argv: array of args
 *
 * Return: 0, 1 if unsuccessful
 */
int main(int argc, char *argv[])
{
	int coins[] = {1, 2, 5, 10, 25};
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = get_change(coins, atoi(argv[1]), sizeof(coins) / sizeof(int));
	printf("%d\n", change);
	return (0);
}

/**
 * get_change - calculates minimum number of coins to make change for amount
 * @amount: amount of money change is to be calculated for
 * @coins: given coins
 * @size: amount of coins
 *
 * Return: the calculated result
 */
int get_change(int coins[], int amount, int size)
{
	int **table;
	int i, j;

	table = (int **) malloc(sizeof(int *) * size);
	for (i = 0; i < size; i++)
		table[i] = (int *) malloc(sizeof(int) * amount + 1);
	if (amount < 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		table[i][0] = 0;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 1; j <= amount; j++)
		{
			if (i > 0)
			{
				if (coins[i] > j)
				{
					table[i][j] = table[i - 1][j];
				}
				else
				{
					table[i][j] = min(table[i - 1][j], 1 + table[i][j - coins[i]]);
				}
			}
			else
			{
				if (coins[i] <= j)
					table[i][j] = 1 + table[i][j - coins[i]];
				else
					table[i][j] = j;
			}
		}
	}
	free(table);
	return (table[size - 1][amount]);
}
