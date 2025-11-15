#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long l,r,c=0;
        cin>>l>>r;
        int j=0;
        for(int i=l;i<=r;i+=j)
        {
            c++;
            j++;
        }
        cout<<c<<"\n";
    }
    return 0;
}