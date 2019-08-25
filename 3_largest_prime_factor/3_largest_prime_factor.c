// Attempting problem at https://projecteuler.net/problem=3
// Finding largest prime factor of 600851475143

#include <stdio.h>
int main()
{


  long int number = 600851475143;
  int factor = 2;
  int largest_prime_factor = 0;

  while (number > factor)
  {
    if (number % factor == 0)
    {
      number = number / factor;
      if (factor > largest_prime_factor)
      {
        largest_prime_factor = factor;
      }
      factor = 2;
    }
    else
    {
      factor = factor + 1;
    }
  }
  printf("Largest prime factor is: %d\n",largest_prime_factor);
}
