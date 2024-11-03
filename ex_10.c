#include <stdio.h>

int main() {

    int c, t, b, slash;

    while((c = getchar()) != EOF) {
        if (c == '\t') {
            c = '\\t';
        } else if (c == '\b') {
            c = '\\b';
        } else if (c == '\\') {
            c = '\\';
        };
        putchar(c);
    };

    return 0;

}
