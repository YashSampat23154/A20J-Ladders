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

    vector<pair<int, int>> v;
    for(int i = 0; i<n; i++){
        int x, y; 
        cin>>x>>y; 

        v.push_back({x,y}); 
    }

    int count = 0; 
    for(int i = 0; i<n; i++){
        bool check1 = false, check2= false, check3 = false, check4 = 0; 
        for(int j = 0; j<n; j++){
            if(i == j) continue; 

            if(v[i].first < v[j].first && v[i].second == v[j].second)
                check1 = true; 
            if(v[i].first > v[j].first && v[i].second == v[j].second)
                check2 = true; 
            if(v[i].second < v[j].second && v[i].first == v[j].first)
                check3 = true;
            if(v[i].second > v[j].second && v[i].first == v[j].first)
                check4 = true;
        }
        if(check1 && check2 && check3 && check4)
            count++; 
    }

    cout << count << endl;    
    
    return 0;
}

