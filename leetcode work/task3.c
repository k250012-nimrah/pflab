#include <stdio.h>
#include <stdlib.h>
int c(const void*a,const void*b){return*(int*)a-*(int*)b;}
int main(){
    int a[]={4,3,2,1},n=4;
    for(int i=0;i<n;i++)a[i]=a[i]%2;
    qsort(a,n,sizeof(int),c);
    for(int i=0;i<n;i++)printf("%d",a[i]);
}


//
/**int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int* transformArray(int* nums, int numsSize, int* returnSize) {
    int* res = (int*)malloc(numsSize * sizeof(int));

    // Replace evens with 0 and odds with 1
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] % 2 == 0)
            res[i] = 0;
        else
            res[i] = 1;
    }

    // Sort the array in non-decreasing order
    qsort(res, numsSize, sizeof(int), cmp);

    *returnSize = numsSize;
    return res;
}

