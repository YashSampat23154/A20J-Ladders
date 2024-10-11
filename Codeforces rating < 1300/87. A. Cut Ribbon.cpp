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

int solve(int n, vi options, vi &dp){
    if(n < 0)
        return INT_MIN; 
    else if(n == 0)
        return 0; 
    
    if(dp[n] != -1)
        return dp[n]; 
    
    int ans = INT_MIN; 
    for(int i = 0; i<options.size(); i++){
        if(n - options[i] >= 0)
        ans = max(ans, 1+solve(n-options[i], options, dp)); 
    }

    return dp[n] = ans; 
}
 
int main()
{ 
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    fastio;
    
    int n, a, b, c; 
    cin>>n>>a>>b>>c; 
    
    vi dp(n+1, -1);
    solve(n, {a, b, c}, dp);

    cout << dp[n] << endl;

    return 0;
}

