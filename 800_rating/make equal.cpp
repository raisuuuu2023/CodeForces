#include<iostream>
#include<vector>
#include<set>
#include<numeric>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        long long sum=accumulate(arr.begin(),arr.end(),0);
        long long target=sum/n;
        long long presum=0;
        bool equal=true;
        for(int i=0;i<n;i++)
        {
            presum+=arr[i];
            if(presum<(i+1)*target)
            {
                equal=false;
                break;
            }
        }
        cout<<(equal?"YES\n":"NO\n");
    }
    return 0;
}