// Problem is here: https://projecteuler.net/problem=6
// finds difference between the square of the sum and the sum of the squares from 1 to 100

#include <stdio.h>
#include <math.h>

int main()
{
  float sum_of_squares = 0;
  float square_of_sum = 0;
  float i = 0.0;
  for (i=0;i<101;i++)
  {
    sum_of_squares += pow(i,2.0);
    square_of_sum += i;

  }
  square_of_sum = pow(square_of_sum,2.0);
  float answer = square_of_sum - sum_of_squares;
  printf("square of sum %f\n",square_of_sum);
  printf("sum of square %f\n",sum_of_squares);
  printf("Result is %f\n",answer);
}
