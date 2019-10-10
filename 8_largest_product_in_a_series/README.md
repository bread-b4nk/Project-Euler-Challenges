# Largest product in a series

Problem can be found [here] (https://projecteuler.net/problem=8)

For the C code however it's quite ugly, I didn't extract a part of the variable series into a list called 'buffer' like in Python, instead I looped through series and multiplied the individual characters to form a product. This lead to some issues because of converting from characters to integers in C. I couldn't just do int buffer = series[i+j];. But I also had to subtract that value by 48 because when I turned a character into an integer it gave the ASCII value instead, so subtracting by 48 brings out the intended value. The rest of it was quite nice and straight forward, I had to change my integers in my C code to long integers because they were too long as well.
