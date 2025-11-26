#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int maxdiff=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]-arr[i-1]>maxdiff)
            maxdiff=arr[i]-arr[i-1];
        }
        int fuel=max(maxdiff,2*(x-arr[n-1]));
        cout<<fuel<<"\n";
    }
    return 0;
}