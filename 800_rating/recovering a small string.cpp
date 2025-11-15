#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=1,b=1,c=1;
        int remaining=n-3;
        int addc=min(remaining,25);
        c+=addc;
        remaining-=addc;
        int addb=min(remaining,25);
        b+=addb;
        remaining-=addb;
        int adda=min(remaining,25);
        a+=addb;
        remaining-=adda;
        char ch1=(a-1)+'a';
        char ch2=(b-1)+'a';
        char ch3=(c-1)+'a';
        cout<<ch1<<ch2<<ch3<<"\n";
    }
    return 0;
}