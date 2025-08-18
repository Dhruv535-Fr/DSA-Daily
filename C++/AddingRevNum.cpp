#include <iostream>
using namespace std;

int reverse(int n){
    int ans = 0;
    while(n != 0){
        int rem = n % 10;
        ans = ans * 10 + rem;
        n = n / 10;
    }
    return ans;
}
int main()
{
   int t,ans = 0;
   cin >> t;
   while(t--){
    int a,b;
    cin >> a >> b;
    ans = reverse(reverse(a)+reverse(b));
    cout << ans << endl;
   }
   return 0;
}