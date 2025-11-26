#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ops=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=n-2;i>=0;i--)
        {
            if(s[i]!=s[i+1])
            {
                s[i]=s[i+1];
                ops++;
            }
        }
        cout<<ops<<"\n";
    }
    return 0;
}