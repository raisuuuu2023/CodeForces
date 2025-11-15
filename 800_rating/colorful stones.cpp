#include<iostream>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int pos=0;
    for(char ch:t)
    {
        if(s[pos]==ch)
        pos++;
    }
    cout<<pos+1<<"\n";
    return 0;
}