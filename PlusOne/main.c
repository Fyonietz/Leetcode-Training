#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
   int* dynamics_digits = malloc((digitsSize + 1) * sizeof(*dynamics_digits));
   if(dynamics_digits == NULL){
        *returnSize = 0;
        return NULL;
   }
   //Push 
   int i = 0;
   while(i < digitsSize){
     dynamics_digits[i] = digits[i];
     printf("D Digits : %d\n",dynamics_digits[i]);
     i++;
   }
   i = digitsSize - 1;
   while(i >= 0){
     if(dynamics_digits[i] < 9){
       dynamics_digits[i]++;
       *returnSize = digitsSize;
       printf("Dynamic Digits : %d\n",dynamics_digits[i]);
       return dynamics_digits;
     }
     dynamics_digits[i] = 0;
     i--;
   }
   dynamics_digits[0] = 1;
   dynamics_digits[digitsSize] = 0;
   *returnSize = digitsSize + 1;
   return dynamics_digits;
   
}
int main(void){
  // int digits[] = {9};
  // int digits[] = {1,2,3};
  // int digits[] = {4,3,2,1};
  int digits[] = {9,9,9};
  int digitsSize = sizeof(digits) / sizeof(digits[0]);
  int returnSize = 0;
  int* plusOneRes = plusOne(digits,digitsSize,&returnSize);

  int i = 0;
  while(i < returnSize){
    printf("Result : %d\n",plusOneRes[i]);
    i++;
  }

  free(plusOneRes);
  return 0;
}
