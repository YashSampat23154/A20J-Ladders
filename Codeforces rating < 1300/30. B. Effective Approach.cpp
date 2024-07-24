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
    
    int n; cin>>n; 
    unordered_map<int,int> mp; 

    for(int i = 0; i<n; i++){
        int no; 
        cin>>no; 

        mp[no] = i; 
    }

    int m; 
    cin>>m; 

    ll vasya = 0, petya = 0;
    for(int i = 0; i<m; i++){
        int no; 
        cin>>no; 

        vasya += mp[no]+1; 
        petya += n-mp[no]; 
    }

    cout << vasya << " " << petya << endl;
    
    return 0;
}

