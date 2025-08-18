#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the pattern: ";  
    cin>>n;

    int star = 1;

    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= 1; j--) {
            if(star == j) {
                cout<<"* ";
                star++;
                
            } else {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}