#include <cstring>
#include <iostream>

#define SIZE 7

int main() {
  // The input regular expression.
  char re[SIZE]="\x00\x00\x00\x00\x00\x00";
  //char re[SIZE]="\0";
  
  // Make the input symbolic. 
  // klee_make_symbolic(re, sizeof re, "re");

  // Try to match against a constant string "hello".
  //std::cout<<strcmp(re, "hello1");
  std::cout<<strcmp(re, "hello1");
  //return strcmp(re, "hello1");
  return 0;
}
