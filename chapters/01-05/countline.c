#include <stdio.h>

/* count line in input*/

int main(int argc, char const *argv[])
{
    /* code */
    int c, nl;

    nl = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
    
    printf("%d\n", nl);

    return 0;
}
