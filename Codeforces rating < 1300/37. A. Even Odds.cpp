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
    
    ll n, k; 
    cin>>n>>k; 

    if(n%2 == 0){
        if(k > n/2){
            k -= n/2; 
            cout << k*2 << endl;
        }
        else
            cout << k*2-1 << endl;
    }
    else{
        if(k > n/2 + 1){
            k -= n/2 + 1; 
            cout << k*2 << endl;
        }
        else
            cout << k*2-1 << endl;
    }
    
    
    return 0;
}

