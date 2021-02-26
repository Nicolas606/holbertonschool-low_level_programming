#include <stdio.h>
#include "holberton.h"

void print_times_table(int n)
{
	int f, c;
	if (n > 15)
		_putchar('\n');
	else
	{
		for (f = 0; f <= n; f++)
		{
			for (c = 0; c <= n; c++)
			{
				int r = f * c;
				if (r <= 9)
				{
					if (c > 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');

					}
					_putchar(r + 48);
				}
				else if (r >= 10 && r < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((r / 10) + 48);
					_putchar((r % 10) + 48);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((r / 100) + 48);
					_putchar((r / 10) + 48);
					_putchar((r % 10) + 48);

				}
			}
			putchar('\n');
		}
	}
}
