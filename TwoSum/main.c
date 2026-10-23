#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums,int nums_size,int target,int* returnSize){
  int* result = malloc(2 * sizeof(int));

  if(result == NULL){
    return NULL;
  }

  for(int i = 0;i < nums_size - 1;i++){
    for(int j = 0;j < i;j++){
      if(nums[i] + nums[j] == target){
        *returnSize = 2;
        result[0] = j;
        result[1] = i;
        return result;
      }
    }
  }

  free(result);
  *returnSize=0;
  return NULL;
}




int main(void){
  int nums[]={3,3};
  int target = 6;
  int nums_size = sizeof(nums);
  int resultSize = 2;
  int* two= twoSum(nums,nums_size,target,&resultSize);
  printf("Output : [%d,%d]\n",two[0],two[1]);
  free(two);
  return 0;
}
