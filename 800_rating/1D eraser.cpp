#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,c=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                c++;
                i+=k-1;
            }
        }
        cout<<c<<"\n";
    }
    return 0;
}