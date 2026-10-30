#include<bits/stdc++.h>
using namespace std;

int main() {
    
    
    int n, m, q; // n = vértices, m = aristas, q = consultas
    if (!(cin >> n >> m)) return 0; // Lectura segura
    
    // Lista de adyacencia usando 1-indexación
    vector<vector<int>> G(n + 1, vector<int>());[cite: 143]
    
    for (int i = 0; i < m; ++i) {[cite: 143]
        int u, v;
        cin >> u >> v;[cite: 143]
        
        G[u].emplace_back(v);[cite: 143]
        G[v].emplace_back(u); // Quita esta línea si el grafo es dirigido
    }
    
    //lógica 
    
}