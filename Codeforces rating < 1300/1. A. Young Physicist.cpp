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

    int x = 0, y = 0, z = 0; 

    while(n--){
        int new_x, new_y, new_z; 
        cin>>new_x>>new_y>>new_z; 

        x+=new_x; 
        y+=new_y; 
        z+=new_z; 
    }

    if(x == 0 && y == 0 && z == 0)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    
    return 0;
}

