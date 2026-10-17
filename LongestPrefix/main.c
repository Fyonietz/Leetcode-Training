#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
  
  for(int i = 0; ;++i){
    if(strs[0][i] == '\0'){
      return strs[0];
    }
    for(int j = 1; j < strsSize;++j){
      if(strs[j][i] != strs[0][i]){
        strs[0][i] = '\0';
        return strs[0];
      }
    }
  }

}

int main(void){
  char* strs[] = {"flower","flow","flight"};
  int size_of_strs = sizeof(strs) / sizeof(strs[0]);
  char* result = longestCommonPrefix(strs, size_of_strs);
  printf("The Prefix Result : %s\n",result);
  return 0;
}
