# Problem is here: https://projecteuler.net/problem=9
# finding the product abc of the pythagorean triplet a^2 + b^2 = c^2 where a + b + c = 1000

def main():
    for a in range(1,333):
        for b in range(a,500):
            for c in range(b,1000):
                if a*a + b*b == c*c:
                    if a+b+c == 1000:
                        print("\n ======================================= \n")
                        print(str(a)+"\t"+str(b)+"\t"+str(c))
                        print(str(a*b*c))
                        print("\n ======================================= \n")
                        return a*b*c

main()