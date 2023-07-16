#include <stdio.h>

/* Verify that the expression getchar() != EOF is 0 or 1
 * This passes the test, any key other than C-d returns 1
 * C-n returns 0*/

int main () {
	int c;

	c = getchar() != EOF;
	printf("%d\n",c);

	


}
