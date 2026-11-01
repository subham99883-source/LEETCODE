//LEETCODE PROBLEM 1:TWO SUM
#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                int *result=(int*)malloc(2*sizeof(int));
                result[0]=i;
                result[1]=j;
                *returnSize=2;
                return result;
            }
    }
    
    
}
*returnSize=0;
return NULL;
}
int main(){
    int nums[]={2,7,11,15};
    int target=9;
    int Size;
    int *ans=twoSum(nums,4,target,&Size);
    if(ans!=NULL){
        printf("[%d,%d]\n",ans[0],ans[1]);
        free(ans);
    }else{
        printf("No solution found\n");
    }
    return 0;
}