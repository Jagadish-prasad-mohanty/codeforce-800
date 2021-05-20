k,n,w=map(int,input().rstrip().split())
total=k*(w*(w+1)//2)
brr=total-n
if brr>0:
    print(brr)
else:
    print(0)