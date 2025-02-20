#WAP to print number between 1 to 100

num = int(input("Enter any number : "))

for i in range(1, num):
    count = 1 
    for j in range(1, i):
        if(i % j == 0): count+=1
    if(count==2): print("prime : ",i)
