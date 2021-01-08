#include <stdio.h>
static int test2 = 8;
int main() {
    static int test;
    register int *num = &test;
    int *num2 = &test2;
    printf("Hello, World! %d\n", *num);
    return 0;
}