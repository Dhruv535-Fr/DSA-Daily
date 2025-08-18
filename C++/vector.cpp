#include<iostream>
#include<vector> //VECTOR is STL container,it's DYNAMICALLY alocaeted ARRAY
using namespace std;

int main(){
    vector <int> vec; //allocate without values 
    vector <int> vec2 = {3,5,7,5,9}; //allocate with values 
    vector <int> vec3(3,0); //the size of VECTOR is 3 and initial value is 0 in all index

    for(int val : vec2){
        cout << val <<" "; //Itreate through VECTOR without index
    }
    cout << endl << "SIZE of vector using size function " << vec2.size() << endl;
    cout << endl << "CAPICITY of vector using capacity function " << vec2.capacity() << endl;
    vec.push_back(34);
    vec.push_back(67); //push_back function to push value in empty vector
    vec.push_back(56);
    for(int val : vec){
        cout << val <<" ";
    }
    cout << endl;
    vec.pop_back();//pop_back function to pop value ftom vector
    vec.pop_back();
    for(int val : vec){
        cout << val <<" ";
    }
    cout << endl;
    cout << vec2.front() << endl; // GET the front value from vector 
    cout << vec2.back() << endl; //GET the last (back) value from vector

    cout << vec2.at(2); // WORK same as the vec2[2] value printing 
 return 0;
}