#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,op=0,sum=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum==n)
        cout<<0<<"\n";
        else if(sum<n)
        cout<<1<<"\n";
        else if(sum>n)
        cout<<sum-n<<"\n";
    }
    return 0;
}