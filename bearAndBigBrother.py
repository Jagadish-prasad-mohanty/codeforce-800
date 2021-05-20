def func(a,b):
    if a==b:
        return 1
    c=0
    while True:
        c+=1
        if (3*a)>(2*b):
            return c

        else:
            a=3*a
            b=2*b




a,b=map(int,input().rstrip().split())
print(func(a,b))