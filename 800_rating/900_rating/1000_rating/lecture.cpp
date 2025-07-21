#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    unordered_map<string, string> dict;
    for (int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;
        dict[a] = b;
    }

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        string alt = dict[word];

        if (alt.length() < word.length())
            cout << alt;
        else
            cout << word;

        if (i != n - 1)
            cout << " ";
    }

    cout << "\n";
    return 0;
}
