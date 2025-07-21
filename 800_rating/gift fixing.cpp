#include<iostream>
#include<vector>
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
        vector<long long>arr(n),brr(n);
        for(int i=0;i<n;i++)
         cin>>arr[i];
        for(int i=0;i<n;i++)
         cin>>brr[i]; 
        long long int minA=*min_element(arr.begin(),arr.end());
        long long int minB=*min_element(brr.begin(),brr.end());
        long long moves=0;
        for(int i=0;i<n;i++)
        {
            moves+=max(arr[i]-minA,brr[i]-minB);
        }
        cout<<moves<<"\n";
    }
    return 0;
}