#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t; // number of test cases
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }
 
        if (sum >= 1 && sum <= n - 1) {
            cout << "NO" << endl; // All reports could be truthful
        } else {
            cout << "YES" << endl; // Someone must be lying
        }
    }
 
    return 0;
}