#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int cents, coin_count, coin_index;
	int coin_count_total, current_coin;
	int current_coin_count;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coin_count = sizeof(coins) / sizeof(int);
	coin_index = 0;
	coin_count_total = 0;
	while (cents > 0 && coin_index < coin_count)
	{
		current_coin = coins[coin_index];
		if (cents >= current_coin)
		{
			current_coin_count = cents / current_coin;
			coin_count_total += current_coin_count;
			cents -= current_coin * current_coin_count;
		}
		coin_index++;
	}
	printf("%d\n", coin_count_total);

	return (0);
}

