#include "holberton.h"

/**
*times_table - this command print the sign
 *
  
 * Return: void
 */
void times_table(void)
{
	int f, c;

	for (f = 0; f <= 9; f++)
	{
		for (c = 0; c <= 9; c++)
		{
			int r = f * c;

			if (r <= 9)
			{
				if (r > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(r + 48);
			}

			else if (r >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((r / 10) + 48);
				_putchar((r % 10) + 48);

			}
		}
		_putchar('\n');
	}
}
