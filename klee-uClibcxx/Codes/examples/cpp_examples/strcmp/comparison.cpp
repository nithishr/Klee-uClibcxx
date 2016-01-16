#include <klee/klee.h>
#include <cstring>
//#include <iostream>

using namespace std;

#define SIZE 7

int main() {
  // The input regular expression.
  char re[SIZE];
  
  // Make the input symbolic. 
  klee_make_symbolic(re, sizeof re, "re");

  // Try to match against a constant string "hello".
  //std::cout<<strcmp(re, "hello1");
  int ret = strcmp(re, "hello1");
  if (ret>1)
	return 0;
  else
	return -1;

  //return 0;
}
