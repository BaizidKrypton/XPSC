#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = stoi(s);
        int root = sqrt(n);
        if (root * root == n)
        {
            // (a + b) = root → we can choose a = 0, b = root
            cout << 0 << " " << root << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
