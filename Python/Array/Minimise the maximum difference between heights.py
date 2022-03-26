    def getMinDiff(self, arr, n, k):
        # code here
        arr.sort()
        mini,maxi = arr[0]+k,arr[n-1]-k
        diff=arr[n-1]-arr[0]
        for i in range(0,n-1):
            currmin=min(mini,arr[i+1]-k)
            currmax=max(maxi,arr[i]+k)
            if currmin>=0:
                diff=min(diff,currmax-currmin)
        return diff