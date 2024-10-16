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

    int count = 1;

    for(int i = 1; i<s.length(); i++){
        if(s[i] == s[i-1]){
            count++; 
        }
        else{
            count = 1; 
        }

        if(count == 7)
            break;
    }

    if(count == 7)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    
    return 0;
}

