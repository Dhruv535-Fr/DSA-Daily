#include <bits/stdc++.h>
using namespace std;

void BalancedParentheses(string s,int n,int oc,int cc){
    if(s.length() == n){
        cout << s <<endl;
        return;
    }

    if(oc < n/2){
        BalancedParentheses(s+'{',n,oc+1,cc);
    }
    if(cc < n/2 && cc < oc){
        BalancedParentheses(s+'}',n,oc,cc+1);
    }
}
int main() {
    int t;
    cin >> t;
    int Temp = 1;
    while(t--){
    int n;
    cin >> n;
    cout << "Test Case #" << Temp++ << ":" << endl;
    BalancedParentheses("",n*2,0,0);
    }
    return 0;
}