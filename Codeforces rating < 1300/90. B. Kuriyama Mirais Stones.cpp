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
    
    int n; cin>>n; 

    vi v; 
    vector<ll> type1; 
    vector<ll> type2;
    
    ll sum = 0; 

    for(int i= 0; i<n; i++){
        int no; cin>>no; 
        v.push_back(no); 
        sum+=no; 
        type1.push_back(sum); 
    }

    sort(v.begin(), v.end()); 

    
    sum = 0; 
    for(int i = 0; i<n; i++){
        sum += v[i]; 
        type2.push_back(sum); 
    }

    int m; 
    cin>>m; 

    while(m--){
        int type, l, r; 
        cin>>type>>l>>r; 
        l--;r--; 
        
        if(type == 1){
            if(l!=0)
                cout << type1[r] - type1[l-1] << endl;
            else 
                 cout << type1[r] << endl;
        }
        else{
            if(l!=0)
                cout << type2[r] - type2[l-1] << endl;
            else 
                 cout << type2[r] << endl;
        }
    }
    
    return 0;
}

