#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,m;
        cin>>n>>s>>m;
        vector<pair<int,int>>task(n);
        for(int i=0;i<n;i++)
        {
            int l,r;
            cin>>l>>r;
            task[i]={l,r};
        }
        bool shower=false;
        int diff=0;
        for(int i=0;i<n;i++)
        {
            int start=task[i].first;
            if(start-diff>=s)
            {
                shower=true;
                break;
            }
            diff=task[i].second;
        }
        if(!shower && m-diff>=s)
        shower=true;

        cout<<(shower?"YES":"NO")<<"\n";
    }
    return 0;
}