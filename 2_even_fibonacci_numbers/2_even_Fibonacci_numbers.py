#   Problem is here: https://projecteuler.net/problem=2
#   Prints the sum of all even-valued Fibonacci numbers below 4 million

a = 1
b = 2
c = 0
all_terms = [2]
answer = 0
while c < 4000000:
    c = a + b
    a = b
    b = c
    all_terms.append(c)



for i in all_terms:
    if i % 2 == 0:
        answer += i


print(answer)
