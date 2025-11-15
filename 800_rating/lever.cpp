#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int arr[n];
        int brr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int j=0;j<n;j++) cin>>brr[j];
        for(int i=0;i<n;i++)
        {
            if(arr[i]>brr[i])
            sum+=(arr[i]-brr[i]);
        }
        cout<<sum+1<<"\n";
    }
    return 0;
}