#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,c=0;
        cin>>n>>m;
        string s;
        cin>>s;
        unordered_map<char,int>freq;
        for(char ch:s)
        {
           freq[ch]++;
        }
        for(char ch='A';ch<='G';ch++)
        {
            if(freq[ch]>=m)
             continue;
            else
              c+=m-freq[ch]; 
        }
        cout<<c<<"\n";
    }
}