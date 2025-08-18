#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double myPow(double x , int n){

    long binaryForm = n;
    if(n<0){
        x = 1/x;
        binaryForm = - binaryForm;
    }
    double ans = 1;
    while(binaryForm > 0){
        if(binaryForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binaryForm /= 2; 
    }
    return ans;
}

int main(){
    int n = 5;
    double x = 4;
    double result = myPow(x,n);
    cout << "ans of 5 power 4 :"<< result;
    return 0;
}