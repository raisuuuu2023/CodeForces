#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<=n-3;i++)
    {
        if(s.substr(i,3)=="xxx")
           count++;
    }
    cout<<count<<"\n";
    return 0;
}