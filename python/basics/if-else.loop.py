# if-else and loops in python

n=10;

if n>10:
    print("n is greater then 10")
elif n>5:
    print("n is greater then 5")
else:
    print("n is between 1 to 5");



# loops

# start, stop, jump

start = 1;
stop = 5;
jump = 1;

for i in range(start,stop,jump): #jump is optional
    print(i);



# sum of 1 to 5 number
sum = 0;
for i in range(1,6):
    sum = sum + i;

print("sum of 1 to 5: ",sum)

i=0;
for i in range(5):
    print(i);

# range() Generates sequence of number

print("========================")

i=0
while i < 5:
    print(i)
    i += 1





