#include <stdio.h>
int main() {
    int n=3;
    int a[]={2,5,1,3,4,7};
    int r[6];
    int j=0;
    for(int i=0;i<n;i++){
        r[j++]=a[i];
        r[j++]=a[i+n];
    }
    for(int i=0;i<6;i++){
        printf("%d",r[i]);
    }
    printf("\n");
    return 0;
}
/**
 the leetcode question solution had to work on it to understand the working of leetcode first
 */
/**int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    int* res = (int*)malloc(numsSize * sizeof(int));
    int index = 0;

    for (int i = 0; i < n; i++) {
        res[index++] = nums[i];       // xi
        res[index++] = nums[i + n];   // yi
    }

    *returnSize = numsSize;
    return res;
}

