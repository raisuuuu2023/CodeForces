#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int power=1;
        while(power*2<=n)
        {
            power*=2;
        }
        cout<<power-1<<"\n";
    }
    return 0;
}