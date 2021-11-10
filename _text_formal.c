#include "main.h"

/**
 * * text_format - relates the types of
 * format with the corresponding function
 * @arga: bring the format arguments
 * @argb: position of each argument
 *
 * Return: 0.
 */
  int (*text_format(const char *arga, int argb))(va_list)
  {
	
	s_format list[] = {
		
		{"c", print_char},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL},

		/**
		 * % c print a single character
		 * % d print a decimal(base 10) number
		 * % i print an integer in base 10
		 * % s print a string of characters
		 * % % print a percent sign(\% also works)
		 */

	};
	int i;

	for (i = 0; list[i].args != NULL; i++)
	{
		
		if (list[i].args[0] == arga[argb])
		{
			
			return (list[i].func);
		}
	}
	
	return (NULL);
}
