#include <stdbool.h>
#include <stdio.h>
#include <string.h>
//TODO convert to string

void to_string(int input){
  for(int i = 0; input > 0; i++){
    if(input % 2){
      printf("Here The Output : %d\n",input);
    }else{
      printf("Alright \n");
    }
  }
}
//ATP Just Commit Anythings
bool isPalindrome(int x) {

}

int main(void) {
  int x = 121;
  // bool isPalin = isPalindrome(x);
  // if(isPalin == 0){
  //   printf("Is it palindrom : false\n");
  // }
  // if(isPalin == 1){
  //   printf("Is it palindrom : true\n");
  // }
  to_string(x);
  return 0;
}
