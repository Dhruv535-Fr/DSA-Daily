#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue <int> qu;

    qu.push(3);
    qu.push(2);
    qu.push(6);

    cout << qu.front() << endl;

    while(!qu.empty()){
        cout << qu.front() << endl;
        qu.pop();
    }
    
}