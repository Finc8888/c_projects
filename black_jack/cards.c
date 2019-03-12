/*
 * Программа для отценивания важности карт.
 * Выпущенно под публичной лицензией Азов Сити
 * (c) 2019 Gavroche Inc.
 */
#include <stdio.h>
#include <stdllib.h>
int main(int argc, char const *argv[])
{
	char card_name[3];
	puts("Введите название карты: ");
	int val = 0;
	if (card_name[0] = 'K')
	{
		val = 10;
	}
	else if (card_name[0] = 'Q')
	{
		val = 10;
	}
	else if (card_name[0] = 'J')
	{
		val = 10;
	}
	else if (card_name[0] = 'A')
	{
		val = 11;
	}
	else
	{
		val = atoi(card_name);
	}
	printf("Ценность карты: %i\n", val);

	
	return 0;
}