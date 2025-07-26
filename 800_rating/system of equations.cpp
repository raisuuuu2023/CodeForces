#include<iostream>
using namespace std;
int main()
{
    int n,m,count=0;
    cin>>n>>m;
    int a=0,b=0;
    for(int a=0;a*a<=n;a++)
    {
        for(int b=0;b*b<=m;b++)
        {
        if((a*a+b==n)&&(a+b*b==m))
        count++;
        }
    }
    cout<<count<<"\n";
    return 0;
}