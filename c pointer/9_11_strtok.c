//
// Created by Rui on 2021/1/14.
//
#include <stdio.h>
#include <string.h>

int count_word(char *str, char const *word) {
    static char whitespace[] = " \t\f\r\v\n";
    char *token;
    int count = 0;
    for (token = strtok(str, whitespace); token != NULL; token = strtok(NULL, whitespace)) {
        if (strcmp(token, word) == 0) {
            count++;
        }
    }
    return count;
}

void main() {
    char str[] = "test1 test2 test3";
    char *word = "test3";
    int count = count_word(str, word);
    printf("we find %d \'%s\'", count, word);
}
