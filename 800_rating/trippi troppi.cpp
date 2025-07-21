#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
       string s;
       getline(cin,s);
       string tri;
       tri+=s[0];
       for(int i=1;i<s.size();i++)
       {
            if(s[i-1]==' ')
                tri+=s[i];
       }
       cout<<tri<<"\n";
    }
    return 0;
}