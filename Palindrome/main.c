#include <stdio.h>
#include <string.h>

bool isPalindrome(int x){
  if(x == 0){
    return true;
  }
  if(x < 0){
    return false;
  }
  char ascii[20];
  int i = 0;

  do{
    ascii[i++] = (x % 10) + '0';
    x /= 10;
  } while (x > 0);
    printf("The Buffer Data %s\n",ascii);
    if (x < 10) return true;
    if(ascii[i-i] == ascii[i-1] && ascii[i-i+1] == ascii[i-2]){
      printf("The First : %d\n",ascii[i-i]);
      printf("The Last : %d\n",ascii[i-1]);


      printf("The First Second : %d\n",ascii[i-i+1]);
      printf("The Last Before : %d\n",ascii[i-2]);
      return true;
    }
  return false;
}

int main(void){
  int x = 10;
  bool isPalin = isPalindrome(x);
  printf("Is it palindrom : %b\n",isPalin);
  return 0;
}
