#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x>45)
        {
            cout<<-1<<"\n";
        }
        else
        {
            vector<int>digit;
            for(int d=9;d>=1;d--)
            {
                if(x>=d)
                {
                    digit.push_back(d);
                    x-=d;
                }
            }
            sort(digit.begin(),digit.end());
            for(int d:digit) cout<<d;
            cout<<"\n";
        }
    }
    return 0;
}