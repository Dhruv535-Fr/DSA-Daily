#include <bits/stdc++.h>
using namespace std;

void DFSTraversal(vector<vector<pair<int, int>>>& AdjList,int n,int sr) {
    vector<bool> visited(n + 1, false);
    stack<int> st;
    st.push(sr);

    cout << "DFS Traversal starting from node " << sr << ": ";
    while (!st.empty()) {
        int current = st.top();
        st.pop();
        cout << current << " ";

        if (!visited[current]) {
            visited[current] = true;
            for (auto& neighbor : AdjList[current]) {
                int next = neighbor.first;
                if (!visited[next]) {
                    st.push(next);
                }
            }
        }
    }
}

// BFS Travesal
void BFSTraversal(vector<vector<pair<int, int>>>& AdjList,int n,int sr) {
    vector<bool> visited(n + 1, false);
    queue<int> q;
    q.push(sr);
    visited[sr] = true;

    cout << "BFS Traversal starting from node " << sr << ": ";

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        cout << current << " ";
        
        for (auto& neighbor : AdjList[current]) {
            int temp = neighbor.first;
            if (!visited[temp]) {
                visited[temp] = true;
                q.push(temp);
            }
        }
    }
}

// BFS
bool FindStoDes(vector<vector<pair<int, int>>>& AdjList, int sr, int des, int n) {
    vector<bool> visited(n + 1, false);
    queue<int> q;
    q.push(sr);
    visited[sr] = true;

    if (sr == des) return true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        for (auto& neighbor : AdjList[current]) {
            int temp = neighbor.first;
            if (!visited[temp]) {
                if (temp == des) return true;
                visited[temp] = true;
                q.push(temp);
            }
        }
    }
    return false;
}

// DFS using stack
bool DFS_Iterative(vector<vector<pair<int, int>>>& AdjList, int sr, int des, int n) {
    vector<bool> visited(n + 1, false);
    stack<int> st;
    st.push(sr);

    while (!st.empty()) {
        int current = st.top();
        st.pop();

        if (!visited[current]) {
            visited[current] = true;
            if (current == des) return true;

            for (auto& neighbor : AdjList[current]) {
                int next = neighbor.first;
                if (!visited[next]) {
                    st.push(next);
                }
            }
        }
    }
    return false;
}

// Print adjacency list
void printAll(vector<vector<pair<int, int>>>& AdjList, int n) {
    cout << "Graph adjacency list:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << "Node " << i << " -> ";
        for (auto edge : AdjList[i]) {
            cout << "(" << edge.first << ", " << edge.second << ") ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Enter number of Nodes & Edges: " << endl;
    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> gp(n + 1);

    cout << "Enter the edges (u v w):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        gp[u].emplace_back(v, w);
        gp[v].emplace_back(u, w); 
    }

    cout << "Enter Source & Destination: " << endl;
    int s, d;
    cin >> s >> d;

    // Using BFS
    if (FindStoDes(gp, s, d, n)) {
        cout << "BFS: Path Exists" << endl;
    } else {
        cout << "BFS: Path Not Exists" << endl;
    }

    // Using DFS
    if (DFS_Iterative(gp, s, d, n)) {
        cout << "DFS (Iterative): Path Exists" << endl;
    } else {
        cout << "DFS (Iterative): Path Not Exists" << endl;
    }

    printAll(gp, n);

    BFSTraversal(gp,n,1);
    DFSTraversal(gp,n,1);

    return 0;
}
