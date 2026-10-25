#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isPalindrome(int x) {

}

int main(void) {
  int x = 121;
  bool isPalin = isPalindrome(x);
  if(isPalin == 0){
    printf("Is it palindrom : false\n");
  }
  if(isPalin == 1){
    printf("Is it palindrom : true\n");
  }

  return 0;
}
