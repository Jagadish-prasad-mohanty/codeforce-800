n=int(input())
maxa=0
suma=0
for i in range(n):
    a,b=map(int,input().split())
    suma-=a
    suma+=b
    if suma>maxa:
        maxa=suma
print(maxa)