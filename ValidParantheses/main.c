#include <stdio.h>
#include <stdbool.h>

bool isValid(char* s) {
  char stack[1000];
  int top = -1;
  char braceMap[200] = {0};

  braceMap['('] = ')';
  braceMap['['] = ']';
  braceMap['{'] = '}';

  for(int i = 0; s[i] != '\0'; i++){
    char brace = s[i];

    if(brace == '(' || brace == '[' || brace == '{'){
        stack[++top] = brace;
    }else{
        if(top == -1 || brace!=braceMap[(int)stack[top--]]){
          return false;

        }
    }
  }

  return top == -1;   
}

int main(void){

  char* s = "()[]{}";
  printf("Is Valid Parantheses : %b",isValid(s));

  return 0;
}
