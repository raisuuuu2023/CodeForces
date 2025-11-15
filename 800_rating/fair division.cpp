#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum1=0,sum2=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
           cin>>arr[i];
           if(arr[i]==1) sum1++;
           else if(arr[i]==2) sum2++;
        }
        int weight=sum1+2*sum2;
        if(weight%2!=0) cout<<"NO"<<"\n";
        else{
            int half=weight/2;
            if(half%2==0||(half%2==1&&sum1>0))
            cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
    }
    return 0;
}