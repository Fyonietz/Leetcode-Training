#include <stdio.h> 


int singleNumber(int* nums, int numsSize) {
  int result = 0;
  for(int i = 0; i < numsSize;i++){
    result ^= nums[i];
  }
  return result;
}


int main (void){
  int nums[] = {2,2,1}; 
  // int nums[] = {4,1,2,1,2}; 
  int numsSize = sizeof(nums) / sizeof(nums[0]);

 int number = singleNumber(nums,numsSize);
  printf("Value Of Number : %d\n",number);
  return 0;
}
