#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> s;

    s.push(3);
    s.push(2);
    s.push(6);

    cout << s.top() << endl;

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
    
}