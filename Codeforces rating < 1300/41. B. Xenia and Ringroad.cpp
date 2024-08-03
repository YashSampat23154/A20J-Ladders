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
    for(int i = 0; i<m; i++)
        cin>>arr[i]; 

    ll count = 0;
    int init = 1; 
    for(int i = 0; i<m; i++){
        if(arr[i] >= init){
            count += arr[i]-init; 
            init = arr[i]; 
        }
        else{
            count += n-init+1; 
            init = 1; 
            i--;
        }
    }

    cout << count << endl;
    
    return 0;
}

