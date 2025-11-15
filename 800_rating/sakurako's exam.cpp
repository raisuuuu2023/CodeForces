#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if((a+b*2)%2==0)
        {
            if(((b*2)%4)-a==0)
            cout<<"YES"<<"\n";
            else cout<<"NO"<<"\n";
        }
        else cout<<"NO"<<"\n";
    }
    return 0;
}