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

    int ans = -1, maxi = -1; 
    for(int i = 0; i<n; i++){
        int no; 
        cin>>no; 

        if(ceil((double)no/m) >= maxi){
            ans = i+1; 
            maxi = ceil((double)no/m);
        }
    }

    cout << ans << endl; 
    
    return 0;
}

