//
// Created by Rui on 2021/1/14.
//

#include "stdio.h"

int my_strlen(char *str, int size) {

    int len;
    for (len = 0; len < size; len++, str++) {
        if (*str == '\0') {
            break;
        }
    }
    return len;
}

void main() {
    char str[] = "test test";
    str[9] = '1';
    str[10] = '1';
    int len = my_strlen(str, 10);
    printf("len = %d\n", len);
}

