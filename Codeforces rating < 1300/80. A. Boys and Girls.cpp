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
    
    // #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    // #endif
    
    fastio;
    
    int b, g; 
    cin>>b>>g; 

    if(b > g){
        while(b && g){
            cout << "BG"; 
            b--; 
            g--; 
        }
        while(b--)
            cout << "B";
        cout << endl;
    }
    else{
        while(b && g){
            cout << "GB"; 
            b--; 
            g--; 
        }
        while(g--)
            cout << "G";
        cout << endl;
    }
    
    return 0;
}

