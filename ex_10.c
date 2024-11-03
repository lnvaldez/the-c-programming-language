#include <stdio.h>

int main() {

    int c, t, b, slash;

    while((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t");
        } else if (c == '\b') {
            printf("\\b");
        } else if (c == '\\') {
            printf("\\");
        };
        putchar(c);
    };

    return 0;

}
