#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        sum+=a[i];
        a[i]=sum;
    }
    for(int i=0;i<n;i++)printf("%d",a[i]);
} //leetcode needed malloced arrays else it wasnt working

 //int* runningSum(int* nums, int numsSize, int* returnSize){
   // int* res = (int*)malloc(numsSize * sizeof(int));
    //int sum = 0;

    //for (int i = 0; i < numsSize; i++) {
      //  sum += nums[i];
        //res[i] = sum;
    

    //*returnSize = numsSize;
   // return res;


