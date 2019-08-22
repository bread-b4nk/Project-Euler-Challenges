// Problem is here: https://projecteuler.net/problem=2
// Prints the sum of all all even-valued Fibonacci numbers below 4 million

#include <stdio.h>

int main()
{
  int first_term = 0;
  int second_term = 1;
  int third_term = 1;
  int sum = 0;

  while (first_term < 4000000)
  {
    first_term = second_term + third_term;
    if (first_term % 2 == 0)
    {
      sum += first_term;
    }
    third_term = second_term;
    second_term = first_term;




  }
  printf("%d\n",sum);
}
