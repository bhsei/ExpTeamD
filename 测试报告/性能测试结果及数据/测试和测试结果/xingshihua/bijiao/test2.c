#include <stdio.h>

int main() {
    char s[] = "axxxxx";
    char *p = s;

    printf("s = %s in the beginning.\n"
           "p is pointed at the %d-th char.\n", s, p - s);
    //p = p + (*p)++ * 3 + 2 - 'a' * 3; // (1)
    p += (*p)++ * 3 + 2 - 'a' * 3; // (2)
    printf("p is moved ahead by %d steps\n", p - s);
    printf("s = %s after the operation.\n", s);
    return 0;
}
