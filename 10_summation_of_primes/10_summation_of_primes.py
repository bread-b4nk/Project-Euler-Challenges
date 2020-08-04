# Problem is here: https://projecteuler.net/problem=10
# finds the sum of all prime numbers below 2 million
from math import *

LIMIT = 2000000     # sets upper bound 

answer = 0
for number in range(2,LIMIT):
    prime = 1       # flag variable
    for i in range(2,int(sqrt(number)+1)):
        if number % i == 0:
            prime = 0
            break
    if prime:
        answer += number

print(str(answer))
