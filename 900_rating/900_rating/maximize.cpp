#include<iostream>
#include<numeric>
using namespace std;
int gcd(int x,int y)
{
    while(y!=0)
    {
        int temp=y;
        y=x%y;
        x=temp;
    }
    return x;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int maximizeY=1;
        int bestval=0;
        for(int y=1;y<x;y++)
        {
            int val= gcd(x, y)+y;
            if(val>bestval)
            {
                bestval=val;
                maximizeY=y;
            }
        } 
        cout<<maximizeY<<"\n";
    }
    return 0;
}