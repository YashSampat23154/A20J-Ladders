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
    
    int n, m; 
    cin>>n>>m; 

    int maxiInN = 0, miniInN = INT_MAX;
    for(int i = 0; i<n; i++){
        int no; 
        cin>>no; 

        miniInN = min(miniInN, no);
        maxiInN = max(maxiInN, no);
    }

    int miniInM = INT_MAX; 
    for(int i = 0; i<m; i++){
        int no; 
        cin>>no; 

        miniInM = min(miniInM, no);
    }

    if(miniInN*2 > maxiInN)
        maxiInN = miniInN*2;

    if(maxiInN < miniInM)
        cout << maxiInN << endl;
    else
        cout << -1 << endl;

    return 0;
}

