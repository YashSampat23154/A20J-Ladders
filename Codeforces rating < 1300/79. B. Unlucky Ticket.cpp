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

    string s; 
    cin>>s; 

    sort(s.begin(), s.begin()+n);
    sort(s.begin()+n, s.end());

    bool check1 = true, check2 = true; 
    for(int i = 0; i<n; i++){
        if(s[i] >= s[i+n])
            check1 = false; 
        if(s[n-i-1] <= s[n+n-1-i])
            check2 = false;
    }

    if(check1 || check2)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    
    return 0;
}

