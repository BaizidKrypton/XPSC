#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] %= 2; // store parity only
        }
        
        int runs = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[i - 1]) {
                runs++;
            }
        }
        
        cout << n - runs << endl;
    }
    
    return 0;
}