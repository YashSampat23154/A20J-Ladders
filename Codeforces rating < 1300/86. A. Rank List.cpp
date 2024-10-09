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

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.first > b.first)
        return true; 
    else if (a.first == b.first && a.second < b.second)
        return true; 
    else
        return false; 
}
 
int main()
{ 
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    fastio;
    
    int n, k; 
    cin>>n>>k; 

    vector<pair<int, int>> v; 
    for(int i = 0; i<n; i++){
        int no, time; 
        cin>>no>>time; 

        v.push_back({no, time}); 
    }

    sort(v.begin(), v.end(), comp); 

    int count = 1;

    for(int i = k-2; i>=0; i--){
        if(v[i].first == v[k-1].first && v[i].second == v[k-1].second)
            count++;
        else
            break;
    }

    for(int i = k; i<n; i++){
        if(v[i].first == v[k-1].first && v[i].second == v[k-1].second)
            count++;
        else
            break;
    }

    cout << count << endl; 
    
    return 0;
}

