// Problem is here: https://projecteuler.net/problem=10
// finds the sum of all prime numbers below 2 million

#include <stdio.h>
#include <math.h>

int main()
{
    int LIMIT = 2000000;
    unsigned long long int answer = 0;
    int prime;              // flag variable

    long int number;
    long int i;
    for (number=2;number<LIMIT;number++)
    {
        prime = 1;
        for (i=2;i<round(sqrt(number)+0.5);i++)
        {
            if (number % i == 0)
            {
                prime = 0;
                break;
            }
            
        }
        if (prime)
        {
            answer = answer + number;
            //printf("%lld\t%ld\n",answer,number);
        }
    
    }
    printf("%lld\n",answer);
}