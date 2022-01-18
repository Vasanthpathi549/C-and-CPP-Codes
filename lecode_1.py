def containsNearbyDuplicate(nums, k):
    c=0
    for i in range(len(nums)):
        for j in range(i+1,len(nums)):
            if nums[i]==nums[j] and abs(i-j)<=k:
                c+=1
    if c==0:
        return False
    else:
        return True
k=int(input())
nums=list(map(int,input().split(",")))
containsNearbyDuplicate(nums,k)