# function in python

def sumOfNumber(x,y):
    return x+y;


def sumOfNaturalNumber(n):
    if n==0:
        return 0;
    
    res = n*(n+1)
    half = res/2;
    return int(half)

result = sumOfNumber(2,4)

print(result)

print(sumOfNaturalNumber(4))