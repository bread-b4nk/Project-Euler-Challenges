# Largest Palindrome Product

The problem can be found [here](https://projecteuler.net/problem=4).

I created a second function called CheckIfPalidrome for this. It just loops through the elements, comparing it to its last element. This is done more efficiently in Python than C, because when I tried printing all the palindromes found, the Python code found many more than the C code. However they still found the same largest palidrome so they both still do what the challenge requires. Then I used 2 for loops, one within the other, to make sure all 3 digit number products are covered. 
