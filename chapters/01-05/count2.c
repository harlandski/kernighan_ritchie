#include <stdio.h>

int main () {
	/* count characters in input; 2nd version*/

	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		; /* Required null statement*/

	printf("%.0f\n", nc);
}

