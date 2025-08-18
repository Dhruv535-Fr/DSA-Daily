#include <bits/stdc++.h>
using namespace std;

void solve(int N, int K) {
    vector<int> P(N);
    // First K positions: P[i] = i + 1 for i in [0, K-1]
    for (int i = 0; i < K; ++i) {
        P[i] = i + 1;
    }
    // Remaining positions: reverse fill from N down
    int val = N;
    for (int i = K; i < N; ++i) {
        while (val <= K || (val > 0 && find(P.begin(), P.begin() + K, val) != P.begin() + K)) {
            --val;
        }
        P[i] = val--;
    }

    // Print result
    for (int i = 0; i < N; ++i) {
        cout << P[i] << " ";
    }
    cout << "\n";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        solve(N, K);
    }
    return 0;
}
