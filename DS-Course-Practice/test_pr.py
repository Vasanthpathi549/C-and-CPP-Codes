def swap(a, b,sw=0):
    for i in range(n):
        if a[i]==b[i]:
            ind=i
            if ind==n-1:
                a[ind-1],a[ind]=a[ind],a[ind-1]
                sw+=1
            else:
                a[i],a[i+1]=a[i+1],a[i]
                sw+=1
    for i,j in zip(a,b):
        if i==j:
            swap(a,b)
        else:
            return sw

n=int(input())
l=[]
a=[]
b=[]
for i in range(n):
    a.append(int(input()))
for i in range(n):
    b.append(int(input()))
sw=0
for i,j in zip(a,b):
    l.append([i,j])
for x in l:
    if x[0]==x[1]:
        f=1
        break
    else:
        f=0
if f==1:
    sw=swap(a,b,0)
    print(sw)
else:
    print(0)