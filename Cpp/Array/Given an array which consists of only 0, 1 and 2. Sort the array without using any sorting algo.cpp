void sort012(int a[], int n)
    {
        // coode here 
        int st=0,end=n-1,mid=0;
        while(mid<=end){
            if(a[mid]==0){
                swap(a[mid],a[st]);
                st++;
            }
            else if(a[mid]==2){
                swap(a[mid],a[end]);
                end--;
                mid--;
            }
            mid++;
        }
    }