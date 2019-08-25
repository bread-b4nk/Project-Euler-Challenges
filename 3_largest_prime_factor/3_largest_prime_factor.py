# Attempting problem at https://projecteuler.net/problem=3
# Finding largest prime factor of 600851475143

largest_prime_factor = 0
number = 600851475143
factor = 2

while number > factor:
    if number % factor == 0:
        number /= factor
        if factor > largest_prime_factor:
            largest_prime_factor = factor
        factor = 2
    else:
        factor += 1

print("Largest prime factor is: "+str(largest_prime_factor))
