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

    unordered_map<int, int> mp; 
    int count = INT_MIN; 

    for(int i = 0; i<n; i++){
        int no; 
        cin>>no; 

        mp[no]++; 

        count = max(count, mp[no]); 
    }

    if(n%2){
        if(count <= n/2+1)
            cout << "YES" << endl; 
        else 
            cout << "NO" << endl;
    }
    else{
        if(count <= n/2)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    
    return 0;
}

