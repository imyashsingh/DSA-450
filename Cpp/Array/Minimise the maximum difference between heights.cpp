    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int mini=arr[0]+k,maxi=arr[n-1]-k;
        int diff=arr[n-1]-arr[0];
        for(int i=0;i<n-1;i++){
            int currmax=max(maxi,arr[i]+k);
            int currmin=min(mini,arr[i+1]-k);
            if(currmin>=0){
                diff=min(diff,currmax-currmin);
            }
        }
        return diff;
        
    }