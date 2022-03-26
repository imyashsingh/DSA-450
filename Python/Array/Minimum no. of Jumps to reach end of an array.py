	def minJumps(self, arr, n):
	    #code here
	    if n==1:
	        return 0
	    jump,end,maxind=0,0,0
	    for i in range(0,n-1):
	        maxind=max(maxind,arr[i]+i)
	        if i==end:
	            jump+=1
	            end=maxind
	        if end>=n-1:
	            return jump
	    return -1