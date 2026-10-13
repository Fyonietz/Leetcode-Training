#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums,int nums_size,int target,int* returnSize){
  int* result = malloc(2 * sizeof(int));

  if(result == NULL){
    return NULL;
  }

  for (int i = 0;i < nums_size;i++){
    printf("Number Of Iteration(I) : %d\n",i);
    for(int j = 0;j < i;j++){
      printf("Number Of Iteration(j) : %d\n",j);
      if(nums[i] + nums[j] == target){
          result[0] = j;
          result[1] = i;
          *returnSize = 2;
          return result;
      }
    }
  }
  *returnSize = 0;
  free(result);
  return NULL;
}




int main(void){
  int nums[]={2,7,11,15};
  int target = 9;
  int nums_size = sizeof(nums);
  int resultSize = 2;
  int* two= twoSum(nums,nums_size,target,&resultSize);
  printf("Output : [%d,%d]\n",two[0],two[1]);
  return 0;
}
