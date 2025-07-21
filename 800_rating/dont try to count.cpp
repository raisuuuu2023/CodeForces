#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i=0;
        cin>>n>>m;
        string s,x;
        cin>>s>>x;
        while( i<6 && s.find(x)==string::npos)
        {
            s+=s;
            i++;
        }
        if(i>=6) cout<<-1<<"\n";
        else cout<<i<<"\n";
    }
    return 0;
} 