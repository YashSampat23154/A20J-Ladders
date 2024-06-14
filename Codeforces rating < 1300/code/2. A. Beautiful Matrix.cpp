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
    
    int arr[5][5]; 
    int imp1, imp2; 

    for(int i=0; i<5; i++)
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1){
                imp1 = i; 
                imp2 = j; 
            }
        }

    cout << abs(2-imp1) + abs(2-imp2) << endl;
    
    
    return 0;
}

