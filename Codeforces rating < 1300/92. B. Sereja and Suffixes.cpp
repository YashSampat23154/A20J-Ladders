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
 
int main()
{ 
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    fastio;
    
    int n, m; 
    cin>>n>>m; 

    vi v(n); 
    for(int i = 0; i<n; i++)
        cin>>v[i]; 

    vi suffix(n); 
    set<int> s; 
    for(int i = n-1; i>=0; i--){
        s.insert(v[i]); 
        suffix[i] = s.size(); 
    }

    while(m--){
        int l; 
        cin>>l; 
        l--; 
        cout << suffix[l] << endl;
    }
    
    return 0;
}

