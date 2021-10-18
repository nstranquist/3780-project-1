// Task 1

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

// Task 1:
/**
  Your task here is to examine the size of the activation record for a function. In particular, I want to know the size in bytes on the stack that is taken up by all the data that is not simply local variables being stored. To do this, write a C++ program that contains several functions that call each other in a sequence. These functions should take in at least one variable by value. It would also be useful to set some local variables to some specific values inside of them. Then using GDB or some other debugger, set a breakpoint at the end of the lowest-level function and examine the memory locations of the stack (probably using x in gdb). You should be able to get an understanding of how much space is taken up by non-variable data, as well as the order of the functions in memory. Note that you should keep these functions fairly simple as it will make your life easier. 
 */

int addSix(int n);
int subtractSeven(int n);
int moduloEight(int n);

int main() {
  int startingNum = 5;

  cout << "Starting number: " << startingNum << endl;

  // 1. Call addSix to kick it off
  int result = addSix(startingNum);

  // 2. Output result
  cout << "End Result: " << result << endl;

  return 0;
}


// get the first character and add "cat" to it, then return
int addSix(int n) {
  n += 6;

  int result = subtractSeven(n);

  return result;
}

// get the last character and add "dog" to it, then return
int subtractSeven(int n) {
  n -= 7;

  int result = moduloEight(n);

  return result;
}

// return the string with the length of the string prepended to the beginning of the string
int moduloEight(int n) {
  int result = n % 8;

  return result;
}