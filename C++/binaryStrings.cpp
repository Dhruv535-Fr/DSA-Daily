#include<bits/stdc++.h>
using namespace std;

void printString(int n, string str = "") {
    if (str.length() == n) {
        cout << str << endl;
        return;
    }
    printString(n, str + "0");
    printString(n, str + "1");
}

int main() {
    int n;
    cin >> n;
    printString(n);
    return 0;
}