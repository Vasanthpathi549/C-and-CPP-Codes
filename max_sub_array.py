l=list(map(int,input().split(",")))
res=[]
for i in range(len(l)):
    res.append([l[i]])
    for j in range(i+1,len(l)):
        res.append(l[i:j+1])
g=0
for x in res:
    if sum(x)>g:
        g=sum(x)
print(g)
    
        
