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

    int count = 0;
    for(int i = 1; i <= n; i++){
        for(int j = i; j*j <= n*n - i*i; j++){
            int check1 = i*i + j*j;
            int check2 = sqrt(check1);
            if(check1 == check2*check2 && check2 <= n)
                count++; 
        }
    }

    cout << count << endl;
    
    return 0;
}

