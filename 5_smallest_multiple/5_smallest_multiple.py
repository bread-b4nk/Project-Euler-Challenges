# Problem is here: https://projecteuler.net/problem=5
# finds smallest multiple evenly divisible by all integers from 1 to 20

def CheckDivision(number):
    if (number % 19 == 0
    and number % 18 == 0
    and number % 17 == 0
    and number % 16 == 0
    and number % 15 == 0
    and number % 14 == 0
    and number % 13 == 0
    and number % 12 == 0
    and number % 11 == 0):
        return 1
    else:
        return 0

for i in range(20,9999999999,20):
    if i % 20 == 0:
        if CheckDivision(i) == 1:
            print(str(i) + "!!")
            break
