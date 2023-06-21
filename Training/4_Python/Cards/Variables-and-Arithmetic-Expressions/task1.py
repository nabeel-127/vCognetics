# Enter your code here. Read input from STDIN. Print output to STDOUT
x, k = input().split()
P = input()

 
#print(x)
#print(k)
#print(str(eval(P.replace('x', x))))

if k == eval(P.replace('x', x)):
    print(True)
else:
    print(False)
