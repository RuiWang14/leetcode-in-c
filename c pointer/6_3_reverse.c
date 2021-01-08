//
// Created by Rui on 2021/1/8.
//
#include <stdio.h>

void reverse_string(char *string) {

    char *lo = string, *hi = string;
    while (*hi != '\0' && *(hi + 1) != '\0') {
        hi++;
    }

    while (lo < hi) {
        char temp = *lo;
        *lo++ = *hi;
        *hi-- = temp;
    }
}

void main() {
    // 声明字符串常量的指针，其值不能修改
    // char *string = "abcdef";
    char string[] = "abcdef";
    reverse_string(string);
    printf("%s", string);
}

