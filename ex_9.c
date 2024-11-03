#include <stdio.h>

/* Write a program to copy its input to its output, replacing
each string of one or more blanks by a single blank
*/

int main() {

    int c;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
        } else {
            putchar(c);
            while ((c = getchar()) == ' ');
            putchar(c);
        }
    }

    return 0;
}
