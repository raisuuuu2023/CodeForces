#include<iostream>
#include<vector>
#include<limits>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool unsorted = false;
        for(int i = 0; i < n - 1; i++)  
        {
            if(arr[i] > arr[i + 1])
            {
                unsorted = true;
                break;
            }
        }

        if(unsorted) {
            cout << 0 << "\n";
            continue;
        }

        int op = INT32_MAX;  
        for(int i = 0; i < n - 1; i++)
        {
            long long diff = arr[i + 1] - arr[i];
            int cur = static_cast<int>(diff / 2) + 1;
            op = min(op, cur);
        }

        cout << op << "\n";
    }
    return 0;
}
