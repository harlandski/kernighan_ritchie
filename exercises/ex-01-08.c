#include <stdio.h>

/* Write a program to count blanks, tabs, and newlines.*/
int main(int argc, char const *argv[])
{
    /* code */
    int c, b, t, nl;

    b = t = nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++b;
        if (c == '\t')
            ++t;
        if (c == '\n')
            ++nl;
    }
    printf("%d %d %d\n", b, t, nl);

    return 0;
}