#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n==0) cout<<1<<"\n";
    else{
    int num[4]={8,4,2,6};
    cout<<num[(n-1)%4]<<"\n";}
    return 0;
}