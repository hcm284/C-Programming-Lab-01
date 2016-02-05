/* String length calculator */
#include <stdio.h>

int stringlength(char str[]);

int main()
{
	char str[] = "'Master of Puppets!'"; /* added single quotation marks to better separate the string from the rest of the output and created own string for easier identification*/

	printf ("The lenght of the string %s is %d ", 
		str, stringlength(str));
}

int stringlength(char str[])
{
	int count = 0;
	int i=0; /*declared 'i' outside of the loop to avoid compatibility issues*/
	for (i=0; str[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}
