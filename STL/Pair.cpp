#include<iostream>
#include<vector>
using namespace std;

int main(){
    pair<string,int> P1 = {"Dhruv",1329};
    
    cout << P1.first << " " << P1.second << endl;

    pair<string,pair<char,int>> P2 = {"Dhruv",{'D',1329}};

    cout << P2.first << " " << P2.second.first <<endl;

    vector<pair<int,int>> vec = {{1,2},{2,3},{3,4}};

    vec.push_back({4,5});
    vec.emplace_back(5,6);


    for(auto p : vec){
        cout << p.first << " " << p.second << endl;
    }
    return 0;
}