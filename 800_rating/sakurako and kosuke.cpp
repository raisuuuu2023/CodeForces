#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i=0;
        bool sakurako=true, kosuke=false;
        cin>>n;
        do
        {
            if(sakurako && !kosuke )
            {
                sakurako=false;
                kosuke=true;
            }
            else
            {
                sakurako=true;
                kosuke=false;
            } i++;
        } while (i<n);
        if(sakurako) cout<<"Sakurako"<<"\n";
        else cout<<"Kosuke"<<"\n";
        
    }
    return 0;
}