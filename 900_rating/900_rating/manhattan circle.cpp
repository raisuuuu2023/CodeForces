#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    vector<string>grid(n);
    for(int i=0;i<n;i++)
    cin>>grid[i];
    int minx=INT_MAX,maxx=INT_MIN;
    int miny=INT_MAX,maxy=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='#')
            {
               int x=i+j;
               int y=i-j;
               minx=min(minx,x);
               maxx=max(maxx,x);
               miny=min(miny,y);
               maxy=max(maxy,y);
            }
        }
    }
    int centerX=(minx+maxx)/2;
    int centerY=(miny+maxy)/2;
    int i=(centerX+centerY)/2;
    int j=(centerX-centerY)/2;
    cout<<i+1<<" "<<j+1<<"\n";
}
return 0;
}