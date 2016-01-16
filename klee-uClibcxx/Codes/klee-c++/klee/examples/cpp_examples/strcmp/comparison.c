#include <klee/klee.h>
#include <string.h>
#include <stdio.h>

#define SIZE 7

int main() {
  // The input regular expression.
  char re[SIZE];
  
  // Make the input symbolic. 
  klee_make_symbolic(re, sizeof re, "re");

  // Try to match against a constant string "hello".
  printf("%d",strcmp(re, "hello1"));

  return 0;
}
