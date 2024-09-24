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
    
    int y, k, n; 
    cin>>y>>k>>n; 

    vi ans; 
    for(int i = k; i<=n; i+=k){
        if(y < i)
            ans.push_back(i-y);
    }

    if(ans.size() == 0)
        cout << -1 << endl;
    else 
        for(auto x: ans)
            cout << x << " "; 
        cout << endl;
    
    return 0;
}

