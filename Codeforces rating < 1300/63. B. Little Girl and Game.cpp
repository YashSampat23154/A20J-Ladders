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
    
    string s; 
    cin>>s; 

    unordered_map<char, int> mp; 
    for(auto ch: s)
        mp[ch]++; 
    
    int odd = 0; 
    for(auto it: mp)
        if(it.second %2 != 0)
            odd++; 
    
    if(odd <= 1 || odd%2 != 0)
        cout << "First" << endl;
    else
        cout << "Second" << endl;   
    
    return 0;
}

