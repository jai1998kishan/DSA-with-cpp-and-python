# function in python
# A reusable block of code. 

# function is a reusable block of code that can be called, or invoked, to run its code, and arguments can be passed to it.

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

