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

    int arr[7]; 
    int total = 0; 

    for(int i = 0; i<7; i++){
        cin>>arr[i]; 
        total+=arr[i]; 
    }

    if(n%total == 0)
        n = total; 
    else 
        n = n%total; 

    for(int i = 0; i<7; i++){
        n = n-arr[i]; 
        if(n <= 0){
            cout << i+1 << endl;
            break;
        }
    }
    
    return 0;
}

