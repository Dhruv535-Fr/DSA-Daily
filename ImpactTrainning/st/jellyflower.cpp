#include<iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        long long a,b,c,d,flower,gellyfish;
        cin >> a >> b >> c >> d;
        
        gellyfish = b/c;
        if(b % c !=0){
            gellyfish++;
        }
        
        flower = a/d;
        if(a % d !=0){
            flower++;
        }
        
        if (flower <= gellyfish) {
            cout << "Flower" << endl;
        } else {
            cout << "Gellyfish" << endl;
        }
    }
    return 0;
}