// Task 2

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

// Task 2:
/**
  Write another program (in C++) that will allocate a local static array of integers and then a dynamic array of integers. Are they stored next to each other? You can examine this by examining the memory addresses where they are located. On some systems the size of a dynamic array is stored in the bytes previous to a dynamically allocated array. Through some experiments on your own, try to see if this is true on delmar. Is this true or not true also for the local array?
  As in the first part, describe the procedure you used to test for this. Note that this is probably not true on most systems, so do not expect to find this. Instead, I want to see you using the debugger doing this. Include a screenshot of you using the debugger in this way.
 */

int main() {
  cout << "Hello pt 2!" << endl;

  // Local static array
  int local_static_array[10];

  // Dynamic array
  int *dynamic_array = new int[10];

  // Output results
  cout << "Local static array: " << &local_static_array << endl;
  cout << "Dynamic array: " << &dynamic_array << endl;




  return 0;
}