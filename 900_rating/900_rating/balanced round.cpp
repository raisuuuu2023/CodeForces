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
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   sort(arr.begin(),arr.end());
   int maxlen=1,currlen=1;
   for(int i=1;i<n;i++)
   {
    if(arr[i]-arr[i-1]<=k)
    {
        currlen++;
        maxlen=max(maxlen,currlen);
    }
    else currlen=1;
   }
   cout<<n-maxlen<<"\n";
}
return 0;
}