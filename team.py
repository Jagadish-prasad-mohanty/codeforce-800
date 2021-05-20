def func(arr):
    c=0
    for i in arr:
        if i==1:
            c+=1
    if c>=2:
        return 1
    else:
        return 0

t=int(input())
cr=0
for i in range(t):
    arr=list(map(int,input().split()))
    res=func(arr)
    if res==1:
        cr+=1

print(cr)
