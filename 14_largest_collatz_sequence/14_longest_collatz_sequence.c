// Attempting to solve https://projecteuler.net/problem=14
/*
  This is the Collatz sequence:
  n --> n/2 (if n is even)
  n --> 3n + 1 (if n is odd)
  it has to start from 13
*/
// It hasn't yet been proven that all starting numbers finish at 1, but we want to find the starting number
// under 1 million that creates the longest chain

#include <stdio.h>

// function that returns the length of the collatz chain, given a number
int Collatz(long int number)
{
  int length = 0;
  while (number > 1)
  {
    if (number % 2 == 0)      // check if n is even
    {
      number = number / 2;
      length = length + 1;
    }
    else                     // otherwise n must be odd
    {
      number = 3 * number + 1;
      length = length + 1;
    }
  }
  return length;
}


int main()
{
  int max_length = 1;
  int length;
  int largest;
  long int i;
  for (i=2;i<1000000;i++)
  {
    length = Collatz(i);
    if (length > max_length)
    {
      max_length = length;
      largest = i;
      printf("\n%d",length);
    }
  }
  printf("\n%d!!!!",Collatz(837799));
  printf("\nThe largest number is %d with a length of %d!\n",largest,max_length);
}
