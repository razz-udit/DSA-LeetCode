/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i,j;
    int* output= (int*)malloc(2*sizeof(int));
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                output[0]=i;
                output[1]=j;
                *returnSize=2;
                return output;
            }
        }
    }
        *returnSize=0;
        return NULL;
}