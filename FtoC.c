/* Fahrenheit to Celsius*/

#include <stdio.h>

int main()
{
	int fahrenheit, celsius;
	printf ("Fahrenheit	Celsius\n");       /*Adding the table header*/
	printf ("==========      =======\n");
	for (fahrenheit = 0; fahrenheit <= 300; fahrenheit = fahrenheit + 10) 
	{
		celsius = (fahrenheit-32)/1.8;
		printf ("   %d	  	 %d \n", fahrenheit, celsius);
	}
	return 0;
}