#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> vec = {1, 2, 3, 4, 5};

    vec.push_back(6);
    vec.erase(vec.begin());
    for(int i : vec){
        cout << i << " ";
    }
    cout << endl << vec[0] << endl;

    vector <int> :: iterator i;
    for(i = vec.begin();i != vec.end();i++){
        cout << *(i) << " ";
    }
    cout << endl;
    vector <int> :: reverse_iterator j;
    for(j = vec.rbegin();j != vec.rend();j++){
        cout << *(j) << " ";
    }
    return 0;
}