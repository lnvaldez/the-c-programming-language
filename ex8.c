#include <stdio.h>

/* Write a program to count blanks (' '), tabs ('/t),
and newlines (\n)
*/

int main() {

    int c, b, t, nl;

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
