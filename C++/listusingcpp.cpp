#include <bits/stdc++.h>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin >> n;
    vector <int> lst;
    
    while(n--){
        string command;
        cin >> command;

        if(command == "append"){
            int x;
            cin >> x;
            lst.push_back(x);
            for(int x : lst) cout << x << " ";
            cout << endl;
        }
        else if(command == "count"){
            int x;
            cin >> x;
            cout << count(lst.begin(),lst.end(),x) << endl;
        }
        else if(command == "reverse"){
            reverse(lst.begin(),lst.end());
            for(int x : lst) cout << x << " ";
            cout << endl;
        }
        else if(command == "insert"){
            int pos,x;
            cin >> pos >> x;
            if(pos >= 0 && pos <= lst.size()){
                lst.insert(lst.begin() + pos,x);
            }
            for(int x : lst) cout << x << " ";
            cout << endl;
        }
        else if(command == "sort"){
            sort(lst.begin(),lst.end());
            for(int x : lst) cout << x << " ";
            cout << endl;
        }
        else if(command == "index"){
            int x;
            cin >> x;
            auto it = find(lst.begin(),lst.end(),x);
            if(it != lst.end()){
                cout << distance(lst.begin(),it) << endl;
            }else{
                cout <<-1 << endl;
            }
        }else if(command == "length"){
            cout << lst.size() << endl;
        }else if(command == "extend"){
            lst.insert(lst.end(),lst.begin(),lst.end());
            for(int x : lst) cout << x << " ";
            cout << endl;
        }
    }
    return 0;
}