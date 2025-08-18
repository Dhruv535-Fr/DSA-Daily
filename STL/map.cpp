#include <bits/stdc++.h>
using namespace std;
 
int main(){

    map<string,int> Rank;

    Rank.insert({"Dhruv",39});
    Rank.insert({"Krutik",34});
    Rank.insert({"Hari",16});

    for(auto &val : Rank){
        cout << val.first << " " << val.second << endl;
    }

    cout << Rank.count("Dhruv") << endl;

    if(Rank.find("Prit") != Rank.end()){
        cout << "found" << endl;
    }else{
        cout << "Not found" << endl;
    }

    multimap<string,int> mm;

    mm.insert({"Prit",42});
    mm.insert({"Prit",44});
    mm.insert({"Prit",42});

    for(auto val : mm){
        cout << val.first << " " << val.second << endl;
    }

    mm.erase("Prit");
    for(auto val : mm){
        cout << val.first << " " << val.second << endl;
    }
}