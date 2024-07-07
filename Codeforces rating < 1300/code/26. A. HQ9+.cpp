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

    bool check = false; 

    for(int i = 0; i<s.length(); i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            check = true; 
            break;
        }
    }

    if(check)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    
    return 0;
}

