#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    int size_of_element[strsSize];
    for(int i = 0;i < strsSize;i++){
      size_of_element[i] = strlen(strs[i]);
      printf("Size Of Each Element(%d) : %d\n",i,size_of_element[i]);
      for(int j = 0; j < i; j++){
        if(strs[i][j] == strs[i+1][j]){
          i+=1;
          return "true";
        }
      }
    }
    return "false";
}

int main(void){
  char* strs[] = {"flower","flow","flight"};
  int size_of_strs = sizeof(strs) / sizeof(strs[0]);
  char* result = longestCommonPrefix(strs, size_of_strs);
  printf("The Prefix Result : %s\n",result);
  return 0;
}
