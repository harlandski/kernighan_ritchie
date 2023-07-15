#include <stdio.h>

/* print Fahrenheit - Celsius table*/

int main () {
	int fahr;

/* To my surprise the following works. In C for expects a statement,
 *  it does not require curly braces, though if you want to include more than
 *  one line you will need to use them */

	for (fahr = 0; fahr <= 300; fahr = fahr + 20) 
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

}
