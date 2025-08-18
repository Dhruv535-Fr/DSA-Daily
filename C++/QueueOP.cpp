#include<iostream>
using namespace std;

#define size 10
int front = -1,rear = -1;
int Queue[size];

void Enqueue(int x){
    if(rear == size -1){
        cout << "Full!" << endl;
    }
    if(front == -1){
        front = 0;
    }
    Queue[++rear] = x;
}

void Dequeue(){
    if(front == -1 || front > rear){
        cout <<" Empty!"<<endl; 
        front = rear = -1;
        return;
    }else{
    int item = Queue[front++];
    cout << item <<endl;
}

}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        string command;
        cin >> command;

        if(command == "En"){
            int x;
            cin >> x;
            Enqueue(x);
        }else if(command == "Dq"){
            Dequeue();
        }else{
            continue;
        }
    }
    return 0;
    
}