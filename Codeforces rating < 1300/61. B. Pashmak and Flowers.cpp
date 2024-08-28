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
    
    int n; 
    cin>>n; 

    vi v(n); 
    for(int i=0; i<n; i++){
       cin>>v[i];  
    }

    sort(v.begin(), v.end());

    int maxi = v[n-1]; 
    int mini = v[0]; 

    ll ans = 0;

    unordered_map<int, int> mp; 
    for(int i=0; i<n; i++){
        if(mp.find(v[i] - maxi + mini) != mp.end()){
            ans += mp[v[i] - maxi + mini];
        }
        mp[v[i]]++; 
    }

    cout << maxi - mini << " " << ans << endl;
    
    return 0;
}

