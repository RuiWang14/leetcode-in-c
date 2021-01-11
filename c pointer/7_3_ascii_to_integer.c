//
// Created by Rui on 2021/1/11.
//
#include<stdio.h>


int ascii_to_integer(char *string) {

    int result = 0;
    while (*string != '\0') {
        if (*string >= '0' && *string <= '9') {
            result = result * 10 + (*string - '0');
        } else {
            return 0;
        }
        string++;
    }
    return result;
}

int main() {
    char string[] = "0123";
    int num = ascii_to_integer(string);

    printf("string = %s\n", string);
    printf("result = %d\n", num);

    return 0;
}
