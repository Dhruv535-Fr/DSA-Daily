#include<iostream>
#include<queue>
using namespace std;

int main(){

    priority_queue <int> pq;

    pq.push(3);
    pq.push(2);
    pq.push(6);

    cout << pq.top() << endl;

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    priority_queue <int,vector<int>,greater<int>> Sq;

    Sq.push(8);
    Sq.push(3);
    Sq.push(5);

    cout << Sq.top() << endl;

    while(!Sq.empty()){
        cout << Sq.top() <<" ";
        Sq.pop();
    }
    cout << endl;

}
