#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   int minel=INT_MAX;
   for(int i=0;i<n;i++)
   {
    if(abs(arr[i])<minel)
    minel=abs(arr[i]);
   }
   cout<<minel<<"\n";
   return 0;
}