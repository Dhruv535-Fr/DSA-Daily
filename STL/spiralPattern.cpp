#include <bits/stdc++.h>
using namespace std;

int main() {
    int t_case;
    cin>>t_case;

    for(int i = 1; i <= t_case; i++) {
        int n;
        cin>>n;

        cout<<"Case #"<<i<<":"<<endl;

        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(i == 1 || i == n || j == n || (j == 1 && i != 2) ){
                    cout<<"* ";
                } else {
                    cout<<"  ";
                }
            }
            cout<<endl;
        }
    }

    return 0;
}