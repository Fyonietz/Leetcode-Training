#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums,int nums_size,int target,int* returnSize){

}




int main(void){
  int nums[]={2,7,11,15};
  int target = 9;
  int nums_size = sizeof(nums);
  int resultSize = 2;
  int* two= twoSum(nums,nums_size,target,&resultSize);
  printf("Output : [%d,%d]\n",two[0],two[1]);
  free(two);
  return 0;
}
