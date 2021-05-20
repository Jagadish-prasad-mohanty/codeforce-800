d1=dict()


for i in map(int,input().split()):
    if i not in d1.keys():
        d1[i]=1
    else:
        d1[i]+=1

print(4-len(d1.keys()))