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

    int arr[m]; 
    for(int i=0; i<m; i++)
        cin>>arr[i]; 

    sort(arr, arr+m); 

    int ans = INT_MAX; 
    for(int i = 0; i+n-1 < m; i++){
        ans = min(ans, arr[i+n-1] - arr[i]);
    }

    cout << ans << endl;
    
    return 0;
}

