#include "stdio.h"

#define a (x + 1)

int x = 2;

void c() {
    printf("c = %d\n", a);
}

void b() {
    int x = 1;
    printf("b = %d\n", a);
    c();
}


int main() {
    b();
//    c();
}