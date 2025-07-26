#include<iostream>
#include<set>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        bool same=true;
        for(char ch : str)
        {
            if(ch!=str[0]){
            same=false;
            break;}
        }
        if(same) cout<<"NO"<<"\n";
        else
        {
            sort(str.begin(),str.end());
            if(str==string(str.rbegin(),str.rend()))
             {reverse(str.begin(),str.end());}
             cout<<"YES\n"<<str<<"\n";
        }
    }
    return 0;
}