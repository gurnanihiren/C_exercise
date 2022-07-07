
print('Python Control Flow statement')

print('Simple-if statement')
print('___________________')

x=int(input('Enter the value of x:'))
if(x > 15):
    print('x is greater than 15')

print('Simple-if-else statement')
print('________________________')

x=int(input('Enter the value of x:'))
if (x > 15):
    print('x is greater than 15')
else:
    print('x is not greater than 15')


print('Nested if-statement')
print('___________________')
x=int(input('Enter a number'))
if(x>0):
    if(x==0):
        print("Number is zero")
    else:
        print("Number is Positive")
else:
    print("Number is negative")

print('_____For loop_____')
n=int(input('Enter the value of n for range'))
for i in range(n):
    print(i,end=" ")
print("\n")

print('_____While Loop_____')
n=int(input('Enter the value of n:'))
i=0
sum=0
while(i<=n):
    sum=sum+i
    i=i+1
print(f"Sum of n Natural numbers is {sum}")
print('\n')

print('Nested Loops in python')
for i in range(0,5):
    for j in range(i+1):
        print('*',end=" ")
    print()


print('Break statement in Python')
print('_________________________')
for i in range(10):
    if(i == 6):
        break
    else:
        print(i,end=" ")

print('\n')

print('Continue statement in Python')
print('____________________________')
i=0
while(i<=10):
    if(i == 6):
        i=i+1
        continue
    else:
        print(i,end=" ")
    i=i+1
print('\n')

print('Pass statement in Python')
print('________________________')
for i in range(5):  
    pass                    #Equal to Null statement does Nothing.
     

print('Simple Defination of a Function in Python')
print('_________________________________________')

def common_fun1():
    x=int(input('Enter Value of x:'))
    y=int(input('Enter value of y:'))
    z=x+y
    print(f"Addition of two Numbers is {z}")
    z=x-y
    print(f"Subtraction of two Numbers is {z}")
    z=x*y
    print(f"Multiplication of two Numbers is {z}")
    z=x/y
    print(f"Division of two Numbers is {z}")

common_fun1()


print('Simple defination of Function with passing arguments in Python')
print('______________________________________________________________')
def common_fun2(n1):
    for i in range(n1):
        if i % 2 == 0:
            print(i,end=" ")

y=int(input('Enter the value of y to pass as a parameter in Function'))
common_fun2(y)


print('Function Defination with Default arguments.')



