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

    int mini = INT_MAX, maxi = INT_MIN; 

    vector<pair<int, int>> v; 
    for(int i = 0; i<n; i++){
        int no1, no2; 
        cin>>no1>>no2; 

        v.push_back({no1, no2}); 

        mini = min(mini, no1); 
        maxi = max(maxi, no2); 
    }

    int i = 0; 
    for(; i<n; i++){
        if(mini == v[i].first && maxi == v[i].second)
            break;
    }

    if(i == n)
        cout << -1 << endl;
    else    
        cout << i+1 << endl;
    
    return 0;
}

