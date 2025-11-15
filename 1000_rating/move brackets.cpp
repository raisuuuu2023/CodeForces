#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string str;
        cin>>str;
        long long sum=0,op=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='(')
            sum++;
            else if(str[i]==')')
            sum--;
            if(sum<0)
            {
                op++;
                sum=0;
            }
        }
        cout<<op<<"\n";
    }
    return 0;
}