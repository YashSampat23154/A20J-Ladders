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
    
    string s1, s2; 
    getline(cin, s1); 
    getline(cin, s2); 

    unordered_map<char, int> mp; 
    bool check = true; 

    for(auto ch : s1){
        if(ch == ' ')
            continue; 
        else 
            mp[ch]++; 
    }

    for(auto ch: s2){
        if(ch == ' ')
            continue; 
        else{
            mp[ch]--; 
            if(mp[ch] < 0){
                check = false; 
                break;
            }
        }
    }

    if(check)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    
    return 0;
}

