#include <stdio.h>

int gcd (int a, int b);

int main () {
  int a, b; // Two integers, input
  int c; // Greatest Common Divisor of a and b
  int status; // Avoids compiler warning on scanf return value

  // Prompt for and input a and b
  printf("Enter a: ");
  status = scanf("%d", &a);
  printf("Enter b: ");
  status = scanf("%d", &b);

  // Calculate and output the GCD
  c = gcd(a, b);
  printf("The GCD is %d.\n", c);

  return 0;
}

// Given two integers, find the greatest common divisor
int gcd (int a, int b) {
  do {
    int n = a % b;
    a = b;
    b = n;
  } while (b != 0);
  return a;
}