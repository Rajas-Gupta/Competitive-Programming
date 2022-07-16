def square(a):
    x=0
    while (x+1)**2<=a:
        x+=1
    return x
for i in range(int(input())):
    n,a=input().split(' ')
    n=int(n)
    a= int(a)
    ans=square(n)*a
    print(ans)