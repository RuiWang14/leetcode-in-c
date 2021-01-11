//
// Created by Rui on 2021/1/11.
//
#include <stdio.h>

int hermite(int n, int x) {
    if (n <= 0) {
        return 1;
    }

    if (n == 1) {
        return 2 * x;
    }

    return 2 * x * hermite(n - 1, x) - 2 * (n - 1) * hermite(n - 2, x);

}

int main() {
    int n = 3;
    int x = 2;
    int h = hermite(n, x);
    printf("hermite(%d, %d) = %d\n", n, x, h);

    return 0;
}