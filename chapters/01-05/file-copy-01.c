#include <stdio.h>

/* copy input to output; 1st version
 *
 * works exactly like cat*/

int main () {
	int c;
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}

