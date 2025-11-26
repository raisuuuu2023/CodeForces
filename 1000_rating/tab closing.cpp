#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n;
        cin>>a>>b>>n;
        if(b*n<=a||a==b) cout<<1<<"\n";
        else cout<<2<<"\n";
    }
    return 0;
}