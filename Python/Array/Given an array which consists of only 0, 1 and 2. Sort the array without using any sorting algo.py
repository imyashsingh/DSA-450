    def sort012(self,a,n):
        # code here
        st,end,mid=0,n-1,0
        while(mid<=end):
            if a[mid]==0:
                a[mid],a[st]=a[st],a[mid]
                st+=1
            elif a[mid]==2:
                a[mid],a[end]=a[end],a[mid]
                end-=1
                mid-=1
            mid+=1