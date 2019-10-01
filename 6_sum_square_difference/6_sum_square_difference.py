# Problem is here: https://projecteuler.net/problem=6
# finds difference between the square of the sum and the sum of the squares from 1 to 100

sum_of_squares = 0
square_of_sum = 0

for i in range(1,101):
  sum_of_squares += i**2
  square_of_sum += i

square_of_sum = square_of_sum ** 2
print("sum of squares: " + str(sum_of_squares))
print("square of sum: " + str(square_of_sum))
print(str(square_of_sum - sum_of_squares))
