#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,minidx,maxidx;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        minidx=min_element(arr.begin(),arr.end())-arr.begin();
        maxidx=max_element(arr.begin(),arr.end())-arr.begin();
        if(minidx>maxidx) swap(minidx,maxidx);
        int left=max(minidx,maxidx)+1;
        int right=max(n-minidx,n-maxidx)+1;
        int both=(minidx+1)+(n-maxidx);
        int result=min({left,right,both});
        cout<<result<<"\n";
    }
    return 0;
}