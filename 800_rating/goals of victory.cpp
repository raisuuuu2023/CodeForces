#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n-1;i++)
        {
            cin>>arr[i];
            s+=arr[i];
        }
        cout<<(-1)*s<<"\n";
    }
    return 0;
}