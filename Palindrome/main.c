#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(int x){
  if(x < 0)return false;
  if(x < 10) return true;
  int based_size_ascii = 25;
  char ascii_N[based_size_ascii];
  char ascii_R[based_size_ascii];
  int i = 0;
  do{
    ascii_N[i++] = (x % 10) + '0';
    x /= 10;
  }while(x > 0 && i < based_size_ascii - 1);
  ascii_N[i] = '\0';
  int size_of_N = (int)strlen(ascii_N);
  for(int j =0;j < i;j++){
    printf("The Number of N : %c ",ascii_N[j]);
    ascii_R[j] = ascii_N[(size_of_N-1)-j];
    printf("The Number of K : %c\n",ascii_R[j]);
  }
  ascii_R[size_of_N] = '\0';
  if(strcmp(ascii_N,ascii_R) == 0){
    return true;
  }
  return false;
}

int main(void){
  int x = 123;
  bool isPalin = isPalindrome(x);
  printf("Is it palindrom : %b\n",isPalin);
  return 0;
}
