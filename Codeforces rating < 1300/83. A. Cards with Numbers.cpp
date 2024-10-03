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
    
    // #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    // #endif
    
    fastio;
    
    int n; 
    cin>>n; 

    unordered_map<int, vector<int>> mp; 
    for(int i = 1; i<=2*n; i++){
        int no; 
        cin>>no;
        mp[no].push_back(i); 
    }

    bool check = true; 
    for(auto it: mp)
        if(it.second.size()%2 != 0){
            check = false; 
            break; 
        }
            
    if(!check)
        cout << -1 << endl;
    else{
        for(auto no: mp){
            for(int i = 0; i<no.second.size(); i+=2)
                cout << no.second[i] << " " << no.second[i+1] << endl;
        }
    }
    
    return 0;
}

