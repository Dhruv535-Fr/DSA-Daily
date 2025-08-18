#include<iostream>
#include<set>
using namespace std;

int main(){
    set <int> s;

    s.insert(4);
    s.insert(2);
    s.insert(6);
    s.insert(3);
    s.insert(7);

    for(int val : s){
        cout << val << " ";
    }
    cout << endl;

    cout << "lower bound:" <<*(s.lower_bound(5)) << endl; 
    cout << "upper bound:" <<*(s.upper_bound(5)) << endl; 
}