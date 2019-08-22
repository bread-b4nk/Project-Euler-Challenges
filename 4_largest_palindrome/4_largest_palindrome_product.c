// Problem is here: https://projecteuler.net/problem=4
// Code that finds the largest palindrome that is a
// product of two 3 digit numbers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  Function that takes in a number and checks if it's palindrome, returns 0 if it isn't
*/
int CheckIfPalindrome(int number)
{
  char string_form[64];
  sprintf(string_form,"%d",number);
  int first = 0;
  int last = strlen(string_form) - 1;

  while (first < last)
  {
    if (string_form[first] != string_form[last])
    {
      return 0;
    }
    first++;
    last--;
  }
}

int main()
{
  int number;
  int largest_palindrome = 0;

  int counter1;
  int counter2;
  for (counter1=999;counter1>1;counter1--)
  {
    for (counter2=999;counter2>1;counter2--)
    {
      number = counter1*counter2;
      if ((CheckIfPalindrome(number) != 0) && (number > largest_palindrome))
      {
        largest_palindrome = number;

      }
    }
  }
  printf("\nLargest palindrome: %d\n",largest_palindrome);

}
