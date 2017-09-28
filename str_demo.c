#include <stdio.h>
#include <string.h>

int main(){
  char string1[14] = "Hello "; // the bytes allotted to str1 has to be enough to fit str2 since we're concatenating it
  char string2[] = "World!";
  printf("%s\n", strncat(string1, string2, 10));  // the third parameter is the length
  return 0;
}
