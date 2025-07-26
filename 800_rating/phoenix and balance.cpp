#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum1=0,sum2=0;
        sum1+=pow(2,n);
       for(int i=1;i<n/2;i++)
       {
        sum1+=pow(2,i);
       }
       for(int i=n/2;i<n;i++)
       {
        sum2+=pow(2,i);
       }
       cout<<abs(sum2-sum1)<<"\n";
    }
    return 0;
}