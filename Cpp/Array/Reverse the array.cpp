#include <iostream>

using namespace std;

int main()
{
    int a[10]={4,34,5,78,4,6,64,622,345,33};
    int n=10;
    for(int i=0;i<n/2;i++){
        int temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}