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
    
    int n, k; 
    cin>>n>>k; 

    k--; 

    int arr[n]; 
    for(int i = 0; i<n; i++)
        cin>>arr[i]; 

    
    bool check = true; 

    for(int i = k+1; i<n; i++)
        if(arr[i] != arr[k]){
            check = false; 
            break;
        }

    if(!check)
        cout << -1 << endl;
    else{
        int i = k; 
        for(; i>=0; i--)
            if(arr[i] != arr[k])
                break;
        
        cout << i+1 << endl;
    }

    
    return 0;
}

