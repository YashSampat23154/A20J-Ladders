// #pragma GCC optimize("Ofast", "unroll-loops")
// #pragma GCC target("avx2", "tune=native")

#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define what(x) cerr << #x << " is " << x << endl;

#define vi vector<int>
#define vll vector<long long>
#define endl "\n"

typedef long long ll;

using namespace std;


char opposite(char ch){
    if(ch == 'W')
        return 'B'; 
    else
        return 'W'; 
}

void dfs_helper(vector<vector<char>> &graph, int i, int j, char chessPiece){
    
    if(chessPiece == 'B')
        graph[i][j] = 'W'; 
    else    
        graph[i][j] = 'B';

    if(i-1 >= 0 && graph[i-1][j] == '.')
        dfs_helper(graph, i-1, j, opposite(chessPiece));
    if(i+1 < graph.size() && graph[i+1][j] == '.')
        dfs_helper(graph, i+1, j, opposite(chessPiece));
    if(j-1 >= 0 && graph[i][j-1] == '.')
        dfs_helper(graph, i, j-1, opposite(chessPiece));
    if(j+1 < graph[i].size() && graph[i][j+1] == '.')
        dfs_helper(graph, i, j+1, opposite(chessPiece));

    return;

}

void dfs(vector<vector<char>> &graph){    

    char chessPiece = 'B'; 

    for(int i = 0; i<graph.size(); i++){
        for(int j = 0; j<graph[i].size(); j++){
            if(graph[i][j] == '.')
                dfs_helper(graph, i, j, chessPiece);
        }
    }
}

int main(){ 
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    fastio;
    
    int n, m; 
    cin>>n>>m; 

    vector<vector<char>> graph(n, vector<char>(m, ' ')); 

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            char no; 
            cin>>no; 
            graph[i][j] = no;
        }
    }

    dfs(graph); 

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++)
            cout << graph[i][j];
        cout << endl;
    }
    
    return 0;
}

