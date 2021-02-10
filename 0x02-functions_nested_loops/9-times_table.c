#include "holberton.h"

/**
*times_table - this command print the sign
 *@c: the caracter print
 *
 * Return: void
 */
void times_table(void)
{
	int a, b;

        for (a = '0'; a <='9'; a++)
        {
                for(b = '0'; b <='9'; b++)
                {
                        _putchar(a);
                        _putchar(b);
                        _putchar(',');
                        _putchar(32);
                        _putchar(32);
                }
        }
        _putchar('\n');

}
