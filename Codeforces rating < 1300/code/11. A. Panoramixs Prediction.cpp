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

void sieveOfErathosthenese(vector<int> &prime){
    vector<bool> check(100, false); 

    for(int i = 2; i<100; i++){
        if(!check[i]){
            for(int j = i*i; j<100; j+=i)
                check[j] = true; 
            prime.push_back(i);
        }
    }
}
 
int main()
{ 
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    fastio;
    
    int n, m; 
    cin>>n>>m; 

    vector<int> prime; 

    sieveOfErathosthenese(prime); 

    int index = lower_bound(prime.begin(), prime.end(), n) - prime.begin(); 

    if(prime[index+1] == m)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}

