# Problem is here: https://projecteuler.net/problem=7
# finds 1001th prime number

def CheckIfPrime(number):
  for i in range(2,number):
    if number % i == 0:
      return 0
  return 1

number = 2
count = 0
while count < 10001:
  if CheckIfPrime(number) == 1:
    count += 1
    answer = number
  number += 1

print("the answer is: " + str(answer))
