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
    cin>>s1>>s2; 

    for(int i = 0; i<s1.length(); i++){
        if(s1[i] >= 65 && s1[i] <= 90)
            s1[i]+=32;
        if(s2[i] >= 65 && s2[i] <= 90)
            s2[i]+=32;
    }
    
    if(s1.compare(s2)  == 0)
        cout << 0 << endl;
    else if(s1.compare(s2) < 0)
        cout << -1 << endl;
    else 
        cout << 1 << endl;
    return 0;
}

