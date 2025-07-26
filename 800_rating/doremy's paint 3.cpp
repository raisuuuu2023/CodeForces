#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        map<int, int> freq;
        for (int i = 0; i < n; ++i) {
            int x;
            cin>>x;
            freq[x]++;
        }

        if (freq.size()<=2) {
            int f1=freq.begin()->second;
            int f2=(freq.size()==2)?next(freq.begin())->second:0;
            if(abs(f1-f2)<=1) cout<<"Yes"<<"\n";
            else cout<<"No"<<"\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}
