#include<iostream>
#include<vector>
#include<queue>
#include<utility>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m==0) return 1;
    vector<int>arr(n);
    queue<pair<int,int>>students;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        students.push({arr[i],i+1});
    }
    int lastchild;
    while(!students.empty())
    {
        auto child=students.front();
        students.pop();
        child.first-=m;
        if(child.first>0)
        {
            students.push(child);
        }
        else
        {
             lastchild=child.second;
        }
    }
    cout<<lastchild<<"\n";
    return 0;
}