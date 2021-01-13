//
// Created by Rui on 2021/1/12.
//
#include "stdio.h"

void matrix_multiply(int *m1, int *m2, int *r, int x, int y, int z) {


    for (int i = 0; i < x; i++) {
        for (int j = 0; j < z; j++) {
            *(r + x * i + j) = 0;
            for (int k = 0; k < y; k++) {
                *(r + x * i + j) +=  *(m1 + y * i + k) * *(m2 + z * k + j);
            }
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < z; j++) {
            printf("%d\t", *(r + x * i + j));
        }
        printf("\n");
    }
}

void main() {

    int m1[3][2] = {
            {2, -6},
            {3, 5},
            {1, -1}
    };

    int m2[2][4] = {
            {4,  -2, -4, -5},
            {-7, -3, 6,  7}
    };

    int x = 3, y = 2, z = 4;
    int r[x][y];

    matrix_multiply(m1, m2, r, x, y, z);
}
