#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,total=0,mycoin=0,count=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr.rbegin(),arr.rend());
    for(int i=0;i<n;i++)
    total+=arr[i];
    for(int i=0;i<n;i++)
    {
        mycoin+=arr[i];
        count++;
        if(mycoin>total-mycoin) break;
    }
    cout<<count<<"\n";
    return 0;
}