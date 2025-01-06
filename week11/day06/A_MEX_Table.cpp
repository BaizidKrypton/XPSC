#include <iostream>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;

    while (t--) {
        long long n, m; // Rows and columns
        cin >> n >> m;

        // Calculate the maximum possible sum of MEX
        long long smaller = min(n, m);
        long long larger = max(n, m);
        long long result = smaller * (larger - 1);

        cout << result << endl;
    }

    return 0;
}