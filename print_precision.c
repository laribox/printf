#include "main.h"

/**
 * print_precision - print spaces based on precision
 * @precision: string of precision
 */
void print_precision(char *precision, int first_arg, types t)
{
	int type_digit_count = 0;

	if (precision != NULL)
	{
		long int num_spaces = 0, i;
	
		if (t.integer > 0)
			type_digit_count = count_digit(t.integer);
		else			
			type_digit_count = count_digit(_atoi(t.string));
		if (precision[0] == '*')
		{
			num_spaces = (first_arg < 0) ? 0 : first_arg;
		}
		else
		{
			num_spaces = _atoi(precision);
		}
		for (i = 0; i < num_spaces - type_digit_count; i++)
		{
			_putchar(' ');
		}
		_putchar(-1);
	}
	free(precision);  /*Free allocated memory */
}


/**
 * _atoi - Convert a string of digits to an integer
 * @s: The string to convert
 * Return: The integer value
 */
int _atoi(const char *s)
{
	int result = 0;
	int i = 0;

	/* Process each digit in the string */
	while (s[i] != '\0')
	{
		/* Check if the character is a digit */
		if (s[i] >= '0' && s[i] <= '9')
		{
			/* Update the result by multiplying by 10 and adding the digit */
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			/* Stop processing if a non-digit character is encountered */
			break;
		}
		i++;
	}

	return (result);
}
