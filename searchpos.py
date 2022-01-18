def pairSum(arr, s):
    res=[]
    for i in range(len(arr)):
        for j in range(i+1,len(arr)):
            if arr[i]+arr[j]==s:
                res.append([arr[i],arr[j]])
    for a in res:
     print(a[0],a[1])
arr=list(map(int,input().split()))
s=int(input())
pairSum(arr,s)
