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

    int a = 0, b = 1; 
    while(a+b < n){
        int c = a+b; 
        a = b; 
        b = c;
    }

    if(n == 0)
        cout << 0 << " " << 0 << " " << 0 << endl;
    else
        cout << 0 << " " << a << " " << b << endl;
    
    return 0;
}

