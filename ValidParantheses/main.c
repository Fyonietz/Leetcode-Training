#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
  int first;
  int second;
}Pair;


bool isValid(char* s) {
  Pair p_a = {.first = '(',.second=')'};
  int size_of_s = (int)strlen(s);



  return false;   
}

int main(void){
  char* s = "()[]{}";
  printf("Is Valid Parantheses : %b",isValid(s));

  return 0;
}
