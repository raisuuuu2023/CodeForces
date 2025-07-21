#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool ismagic=true;
    for(int i=0;i<s.length();)
    {
        if(s.substr(i,3)=="144")
         i+=3;
        else if(s.substr(i,2)=="14")
         i+=2;
        else if(s[i]=='1')
         i+=1;
        else {ismagic=false; break;}  
    }
    if(ismagic) cout<<"YES";
    else cout<<"NO";
    return 0;
}