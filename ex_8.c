#include <stdio.h>

/* Exercise 1-8. Write a program to count blanks (' '), tabs ('/t),
and newlines (\n)
*/

int main() {

    int c, b, t, nl;

    b = 0;
    t = 0;
    nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++b;
        } else if (c == '\t') {
            ++t;
        } else if (c == '\n') {
            ++nl;
        }
    };

    printf("Blanks: %d\nTabs: %d \nNewlines: %d\n", b, t, nl);

    return 0;

}
