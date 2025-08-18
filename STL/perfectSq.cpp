
#include <iostream>
using namespace std;

int minSquares(int n) {
  

    if (n <= 3)
        return n;
  	
    int cnt = n; 

    for (int x = 1; x*x <= n; x++) {
    	cnt = min(cnt, 1 + minSquares(n - x*x));
    }
    return cnt;
}

int main() {
  	int n;
    cin >> n;
  
    cout << minSquares(n);
    return 0;
}