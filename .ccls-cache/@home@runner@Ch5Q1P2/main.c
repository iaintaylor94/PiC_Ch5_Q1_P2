/* Program to calculate the 200th triangular number, introduction to the for statement. */

#include <stdio.h>

int main(void) {

  int n, triangularNumber;

  triangularNumber = 0;

  for ( n = 1; n <= 200; n = n + 1) {
    triangularNumber = triangularNumber + n;
  }

  printf ("The triangular number is %i\n", triangularNumber);
  
  return 0;
}