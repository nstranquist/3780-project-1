// Task 1

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

// Task 1:
/**
 Your task here is to examine the size of the activation record for a function. In particular, I want to know the size in bytes on the stack that is taken up by all the data that is not simply local variables being stored. To do this, write a C++ program that contains several functions that call each other in a sequence. These functions should take in at least one variable by value. It would also be useful to set some local variables to some specific values inside of them. Then using GDB or some other debugger, set a breakpoint at the end of the lowest-level function and examine the memory locations of the stack (probably using x in gdb). You should be able to get an understanding of how much space is taken up by non-variable data, as well as the order of the functions in memory. Note that you should keep these functions fairly simple as it will make your life easier. 
 */

int main() {
  cout << "Hello pt 1!" << endl;


  return 0;
}