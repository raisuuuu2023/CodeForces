#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,c=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
           if(arr[i]==-1) sum++;
        }
            while(sum>n/2||sum%2==1)
            {
                c++;
                sum--;
            }
            cout<<c<<"\n";
    }
    return 0;
}