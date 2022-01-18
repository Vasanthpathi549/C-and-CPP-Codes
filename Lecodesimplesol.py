def containsNearbyDuplicate(nums, k):
        d={}
        for i,j in enumerate(nums):
            if j in d and abs(i-d[j])<=k:
                return True
            d[j]=i
            print(d)
        print(d)
nums=list(map(int,input().split()))
k=int(input())
containsNearbyDuplicate(nums,k)
            