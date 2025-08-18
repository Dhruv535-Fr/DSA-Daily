#include<iostream>
using namespace std;

void change(int *ptr){
    *ptr = 20;
}
int main(){
    int a = 10;
    int *ptr = &a;
    int **ptr1 = &ptr;
    cout << &a << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
    cout << ptr1 << endl;
    int *temp = NULL;
    cout << temp << endl;
    change(&a);
    cout << a << endl;

    return 0;
}
