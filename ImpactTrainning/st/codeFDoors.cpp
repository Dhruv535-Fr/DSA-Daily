#include<bits/stdc++.h>
using namespace std;

bool Distance(vector<int> &arr,int n,int k){
    for (int i = 0;i <= n;i++) {
        int sec = 0;
        bool flag = true;
        for (int j = 0; j < n;j++) {
            if (arr[j] == 0) {
                sec++;
            } else {
                if (sec >= i && sec < i + k) {
                    sec++;
                } else {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) return true;
    }
    return false;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin >> n >> k;

        vector<int> arr(n);
        for(int i = 0;i < n;i++){
            cin >> arr[i];
        }
        if(Distance(arr,n,k)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}