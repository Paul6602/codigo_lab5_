#include<bits/stdc++.h>
using namespace::std;


vector<int> BFS(vector<int> &src, int n, vector<vector<int>> &G) {
    vector<int> D(n, -1); 
    queue<int> Q;

  
    for (auto &x : src) {
        D[x] = 0;
        Q.emplace(x);
    }

    while (not Q.empty()) {
        int u = Q.front(); 
        Q.pop();

        for (int &v : G[u]) {
            if (D[v] != -1) continue; 
            
            D[v] = D[u] + 1;
            Q.emplace(v);
        }
    }
    return D;
}

int main() {
   
    
  
    
    return 0;
}
