#include<iostream>
#include<list>
using namespace std;

int main(){

    list <int> li = {1, 2, 3, 4, 5, 6};

    for(int val : li){
        cout << val << " ";
    }
    cout << endl;
    list <int> l2;

    l2.push_back(3);
    l2.push_back(4);
    l2.push_front(2);
    l2.push_front(1);

    for(int val : l2){
        cout << val << " ";
    }
    cout << endl;

    l2.pop_back();
    l2.pop_front();

    for(int val : l2){
        cout << val << " ";
    }

    cout << endl;
}