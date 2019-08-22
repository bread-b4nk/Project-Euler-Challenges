# Problem is here: https://projecteuler.net/problem=4
# Code that finds the largest palindrome that is a
# product of two 3 digit numbers

#  Function that takes in a number and checks if it's a palindrome
def CheckIfPalindrome(number):
    string_form = str(number)
    for i in range(int(len(string_form)/2)):    # int(len(string_form)) will give a rounded down version of half the length
        if string_form[i] != string_form[-(i+1)]:
            return 0
    return 1

# Looping through multiplying two 3 digit numbers
largest_palindrome = 0
for i in range(999):
    for j in range(999):
        check = 1
        number = i * j
        check = CheckIfPalindrome(number)
        if check == 1 and number > largest_palindrome:
            largest_palindrome = number
            print(number)

print("The largest palindrome is: " + str(largest_palindrome))
