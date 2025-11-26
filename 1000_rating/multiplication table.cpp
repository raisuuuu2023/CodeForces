#include<iostream>
using namespace std;
int main()
{
    long long n,x;
    cin>>n>>x;
    int c=0;
    for(long long i=1;i<=n;i++)
    {
       for(long long j=1;j<=n;j++)
       {
           if(i*j==x) c++;
       }
    }
    cout<<c<<"\n";
    return 0;
}