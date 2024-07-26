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

    int arr[n]; 
    for(int i = 0; i<n; i++){
        cin>>arr[i]; 
    }

    int index = -1;     
    int ans = INT_MAX; 
    for(int i = 1; i<n; i++){
        if(ans > abs(arr[i] - arr[i-1])){
            ans = min(ans, abs(arr[i] - arr[i-1])); 
            index = i; 
        }
    }

    if(ans > abs(arr[0] - arr[n-1]))
        cout << 1 << " " << n << endl;
    else 
        cout << index+1 << " " << index << endl;
    
    return 0;
}

