#include<iostream>
#include<set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x;
        cin >> x;

        // Step 1: Extract digits from x and store in a set
        set<int> digits;
        int temp = x;
        while(temp > 0)
        {
            digits.insert(temp % 10);
            temp /= 10;
        }

        // Step 2: Try all values of y starting from 0
        for(int y = 0; ; y++)
        {
            int y_temp = y;
            if(y_temp == 0 && digits.count(0))
            {
                cout << y << "\n";
                break;
            }
            while(y_temp > 0)
            {
                if(digits.count(y_temp % 10))
                {
                    cout << y << "\n";
                    goto next_case;
                }
                y_temp /= 10;
            }
        }
        next_case:;
    }
    return 0;
}
