// Problem is here: https://projecteuler.net/problem=7
// finds 1001th prime number

#include <stdio.h>
int CheckIfPrime(int number)
{
  int i = 2;
  for (i=2;i<number;i++)
  {
    if (number % i == 0)
    {
      return 0;
    }
  }
  return 1;
}

int main()
{
  int number = 2;
  int count = 0;
  int answer;
  while (count < 10001)
  {
    if (CheckIfPrime(number))
    {
      count += 1;
      answer = number;

    }
  number += 1;
  }
  printf("%d\n",answer);
}
