N=int(input())
arr=list(map(int,input().split()))
for i in range(0,N,2):
    if N%2==0:
        temp=arr[i]
        arr[i]=arr[i+1]
        arr[i+1]=temp
    else:
        if i!=N-1:
            temp=arr[i]
            arr[i]=arr[i+1]
            arr[i+1]=temp
        else:
            break
print(arr)
