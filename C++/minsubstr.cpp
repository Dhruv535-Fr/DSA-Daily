#include <bits/stdc++.h>
using namespace std;


int findMinSubstr(string A, string B) {
    int ans = INT_MAX;
    int p1 = 0, p2 = 0;

    int cntA[26] = {0};
    int cntB[26] = {0};
    

    for(char ch : A) {
        cntA[ch - 'a']++;
    }

    cntB[B[0] - 'a']++;

    while(p2 < B.length()) {
        bool contains = true;

        for(int i = 0; i < 26; i++) {
            if(cntB[i] < cntA[i]){
                contains = false;
                break;
            }
        }

        if(contains == true) {
            ans = min(ans, p2-p1+1);
            cntB[B[p1] - 'a']--;
            p1++;

        } else {
            p2++;
            if(p2 < B.length()){
                cntB[B[p2] - 'a']++;
            }
        }
    }


    return (ans == INT_MAX ? -1 : ans);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t_case;
    cin >> t_case;

    while(t_case--) {
        string A, B;
        cin>>A>>B;

        int ans = findMinSubstr(A,B);
        cout<<ans<<endl;
    }

    return 0;
}