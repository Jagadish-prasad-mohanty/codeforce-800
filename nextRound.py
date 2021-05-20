def func(arr,n,k):
    c=0
    for i in range(n):
        if arr[i]>0 and arr[i]>=arr[k-1]:
            c+=1
        
    return c

n,k=map(int,input().split())
arr=list(map(int,input().split()))
print(func(arr,n,k))
