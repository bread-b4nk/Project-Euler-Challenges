// Problem is here: https://projecteuler.net/problem=9
// finds the product of a pythagorean triplet where its sum is 1000

#include <stdio.h>


int main()
{
  // a^2 + b^2 = c^2
  int a;
  int b;
  int c;

  for(a=1;a<333;a++) 
  {

    for (b=a;b<500;b++)
    {

      for (c=b;c<1000;c++)
      {
        long int a_squared = a*a;
        long int b_squared = b*b;
        long int c_squared = c*c;
        if ((a_squared+b_squared==c_squared) && (a+b+c==1000))
        {
          long int answer = a*b*c;
          printf("%ld\n",answer);
        }
      }
    }
  }
}
