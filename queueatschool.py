n,k=map(int,input().split())
m=n
str1=input()
str1=list(str1)
while k>0:
    i=0
    n=m
    while n>1:
        if str1[i]=='B' and str1[i+1]=='G':      
            str1[i]='G'
            str1[i+1]='B'
            i+=2
            n-=2

        else:
            i+=1
            n-=1
    k-=1
print(''.join(str1))
        