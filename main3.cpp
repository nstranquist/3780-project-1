// Task 3

#include <stdio.h>
#include <iostream>
#include <string>
#include <bits/stdc++.h> // for INT_MAX, INT_MIN
#include <climits>
#include <limits>

using namespace std;

bool willOverflowAddition(int a, int b);

bool willOverflowMultiplication(int a, int b);

bool willOverflowDivision(int a, int b);


// Task 3:
/**
  Write a program that prompts the user for two numbers and stores them in signed integers.
  The program should then add those two numbers together and store the result in a signed integer and display the result.
  Your program should then multiply them by each other and store the result in another integer and display the result.
  Then do the same but with dividing the first number by the second.
  Display an error message to the screen if an operation has happened that does not result in a correct (non-overflow) calculation. In other words, make sure to test your code for error cases. You can safely assume your program will only be given integers.
 */

int main() {
  cout << "Hello pt 3!" << endl;

  int maxIntPos = 2147483647;
  int maxIntNeg = -2147483648;

  try {
    // Prompt user for two numbers (can assume will only be integers)
    cout << "Enter a number: ";
    int num1;
    cin >> num1;
    cout << "Enter another number: ";
    int num2;
    cin >> num2;

    // Add the two numbers

    // 1. Check for overflow
    if(willOverflowAddition(num1, num2)) {
      throw "Overflow";
    }

    // 2. Safely add the numbers
    int sum = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    // Multiply the two numbers

    // 1. Check for overflow
    if(willOverflowMultiplication(num1, num2)) {
      throw "Overflow";
    }

    // 2. Safely multiply the numbers
    int product = num1 * num2;
    cout << "The product of " << num1 << " and " << num2 << " is " << product << endl;

    // Divide the first number by the second
    
    // 1. Check for overflow
    if(willOverflowDivision(num1, num2)) {
      throw "Overflow";
    }
    
    // 2. Safely divide the numbers
    int quotient = num1 / num2;
    cout << "The quotient of " << num1 << " and " << num2 << " is " << quotient << endl;
  }
  catch (exception e) {
    // for debugging
    cout << "Exception: " << e.what() << endl;
    throw e;
  }

  return 0;
}

bool willOverflowAddition(int a, int b) {
  if ((b > 0) && (a > numeric_limits<int>::max() - b))
    return true;
  if ((b < 0) && (a < numeric_limits<int>::min() - b))
    return true;

  return false;
}

bool willOverflowMultiplication(int a, int b) {
  if ((a > 0 && b > 0) && (a > numeric_limits<int>::max() / b))
    return true;
  if ((a < 0 && b < 0) && (a < numeric_limits<int>::min() / b))
    return true;
  if ((a > 0 && b < 0) && (b < numeric_limits<int>::min() / a))
    return true;
  if ((a < 0 && b > 0) && (b > numeric_limits<int>::max() / a))
    return true;

  return false;
}

bool willOverflowDivision(int a, int b) {
  if (b == 0)
    return true;

  return false;
}