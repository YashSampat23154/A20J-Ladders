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
    
    int t = 1;
    cin>>t;

    int sum = 0;
    for(int i = 0; i<t; i++){
        int n; 
        cin>>n; 

        sum += n; 
    }


    if(sum%t == 0)
        cout << t << endl;
    else 
        cout << t-1 << endl;
    
    return 0;
}

