#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int>left(n),right(n);
        unordered_set<char>seen;
        seen.clear();
        for(int i=0;i<n;i++)
        {
            seen.insert(s[i]);
            left[i]=seen.size();
        }
        seen.clear();
        for(int i=n-1;i>=0;i--)
        {
            seen.insert(s[i]);
            right[i]=seen.size();
        }
        int mx=0;
        for(int i=0;i<n-1;i++)
        {
            int total=left[i]+right[i+1];
            if(total>mx) mx=total;
        }
        cout<<mx<<"\n";
    }
    return 0;
}
