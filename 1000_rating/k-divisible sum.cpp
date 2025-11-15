#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        k=k*((n+k-1)/k);
        long long ans=(k+n-1)/n;
        cout<<ans<<"\n";
    }
    return 0;
}