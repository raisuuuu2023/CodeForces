#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,c0=0,c1=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            c1++;
        }
        else if(s[i]=='0')
        {
            c0++;
        }
    }
    int p=min(c0,c1);
    cout<<n-2*p<<"\n";
    return 0;
}