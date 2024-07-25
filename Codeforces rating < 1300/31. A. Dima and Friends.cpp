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

    int total = 0; 
    for(int i = 0; i<n; i++){
        int no; 
        cin>>no; 

        total+=no; 
    }

    int ans = 0; 

    if((total+1)%(n+1) != 1)
        ans++; 
    if((total+2)%(n+1) != 1)
        ans++; 
    if((total+3)%(n+1) != 1)
        ans++; 
    if((total+4)%(n+1) != 1)
        ans++; 
    if((total+5)%(n+1) != 1)
        ans++; 

    cout << ans << endl;

    return 0;
}

