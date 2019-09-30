// Problem is here: https://projecteuler.net/problem=5
// finds smallest multiple evenly divisible by all integers from 1 to 20

#include <stdio.h>

int CheckDivision(int number)
{
  if ((number % 19 == 0)
    && (number % 18 == 0)
    && (number % 17 == 0)
    && (number % 16 == 0)
    && (number % 15 == 0)
    && (number % 14 == 0)
    && (number % 13 == 0)
    && (number % 12 == 0)
    && (number % 11 == 0))
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  long int i = 20;
  for (i=20;i<9999999999;i+=20)
  {

    if (CheckDivision(i) == 1)
    {
      printf("%d\n",i);
      return 1;
    }
  }
}
