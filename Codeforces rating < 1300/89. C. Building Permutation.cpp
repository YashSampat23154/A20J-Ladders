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

    vi v; 
    for(int i = 0; i<n; i++){
        int no; 
        cin>>no; 
        v.push_back(no); 
    }

    sort(v.begin(), v.end()); 

    ll ans = 0; 
    for(int i = 0; i<n; i++){
        ans += abs((ll)v[i] - i - 1);
    }

    cout << ans << endl;
    
    return 0;
}

