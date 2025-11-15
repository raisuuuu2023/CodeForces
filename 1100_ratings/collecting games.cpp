#include<iostream>
#include<vector>
#include<map>
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
        vector<long long>a(n),b(n),c(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            c[i]=a[i];
        }
        sort(a.begin(),a.end());
        long long s=0;
        for(int i=0;i<n;i++)
        {
            b[i]=s;
            s+=a[i];
        }
        map<int,int>m;
        m[a[n-1]]=n-1;
        for(int i=n-2;i>=0;i--)
        {
            if(b[i+1]>=a[i+1])
            m[a[i]]=m[a[i+1]];
            else
            m[a[i]]=i;
        }
        for(int i=0;i<n;i++)
        cout<<m[c[i]]<<" ";
        cout<<"\n";
    }
    return 0;
}