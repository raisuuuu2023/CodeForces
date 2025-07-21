#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int zero=0,one=0;
        for(char ch:s)
        {
            if(ch=='0') zero++;
            else if(ch=='1') one++;
        }
        int move=min(zero,one);
        if(move%2==1) cout<<"DA"<<"\n";
        else cout<<"NET"<<"\n";
    }
    return 0;
}