#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        bool changed;
        do {
            changed = false;
            for (int i = 1; i < n - 1; i++) {
                if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
                    swap(arr[i], arr[i + 1]);
                    changed = true;
                    i++; 
                }
            }
        } while (changed);
        bool f=true;
        for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            {
                f=false;
                break;
            }
    }
    if(f) cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    }

    return 0;
}
