#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<string,int>freq;
    string maxtwogram;
    int maxcount=0;
    for(int i=0;i<n;i++)
    {
        string twogram=s.substr(i,2);
        freq[twogram]++;
        if(maxcount<freq[twogram])
        {
            maxcount=freq[twogram];
            maxtwogram=twogram;
        }
    }
    cout<<maxtwogram;
    return 0;
}