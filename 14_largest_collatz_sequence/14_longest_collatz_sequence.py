# Attempting to solve https://projecteuler.net/problem=14
# ####
#  This is the Collatz sequence:
#  n --> n/2 (if n is even)
#  n --> 3n + 1 (if n is odd)
#  it has to start from 13
# ####
# It hasn't yet been proven that all starting numbers finish at 1, but we want to find the starting number
# under 1 million that creates the longest chain


# function that returns the length of a collatz chain, given a number
def Collatz(number):
    length = 0
    while number > 1:
        if number % 2 == 0:
            number = number/2
            length += 1
        else:
            number = 3 * number + 1
            length += 1

    return length

max_length = 1
for i in range(2,1000000):
    length = Collatz(i)
    if length > max_length:
        print(str(i))
        max_length = length
        largest = i

print("The largest number is "+str(largest)+" with a length of "+str(max_length))
