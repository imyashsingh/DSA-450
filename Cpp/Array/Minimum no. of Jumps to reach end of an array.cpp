    int minJumps(int arr[], int n){
        // Your code here
        int maxind=0,jump=0,end=0;
        if(n==1)
            return 0;
        for(int i=0;i<n-1;i++){
            maxind=max(arr[i]+i,maxind);
            if(end==i){
                jump++; 
                end=maxind;
            }
            if(end>=n-1)
                return jump;
        }
        return -1;
    }