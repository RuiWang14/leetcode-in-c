//
// Created by Rui on 2021/1/14.
//
#include "stdio.h"

char *my_strcpy_end(char *dst, char *src) {
    for (; *src != '\0'; dst++, src++) {
        *dst = *src;
    }
    return dst-1;
}

void main() {
    char dst[100], src[] = "test test";
    char *end = my_strcpy_end(dst, src);
    printf("*end = %c\n", *end);
}
