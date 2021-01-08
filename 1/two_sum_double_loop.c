//
// Created by Rui on 2021/1/5.
//

#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int *ret = malloc(sizeof(int) * 2);
                ret[0] = i, ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    printf("\nsize of *nums %lu \n", sizeof(nums));

    *returnSize = 0;
    return NULL;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 4;
    int returnSize = 0;
    int *numPointer = &target;

    int a = 1;
    int *b = &a;
    int **c = &b;

    int *result = twoSum(nums, numsSize, target, &returnSize);

    for (int i = 0; i < 10; i++) {
        printf("%d", *((&returnSize) + i));
    }

    printf("\nsize of nums[] %lu \n", sizeof(nums));
    printf("size of array %lu", sizeof(nums) / sizeof(nums[0]));
    return 0;
}