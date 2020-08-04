# Summation of primes

Problem can be found [here] (https://projecteuler.net/problem=10)

To try to make this as efficient as it could be, so when checking whether a number is a prime, I only divide it by numbers up to its square root. The only big issue I ran into was in the C code, as the numbers got bigger, they turned negative. I tried using long int instead and the problem still appeared, at first I thought the cause of the error had to be something else and spent a lot of time looking elsewhere. After a while, I realised that all I had to do was use long long int since the answer was out of range.