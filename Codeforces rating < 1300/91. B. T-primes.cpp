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

bool bs(vll &primeNumber, ll x){
    int low = 0, high = primeNumber.size(); 
    while(low <= high){
        int mid = low + (high - low)/2; 
        if(primeNumber[mid] == x)
            return true; 
        else if(primeNumber[mid] < x)
            low = mid + 1; 
        else 
            high = mid - 1; 
    }
    return false; 
}

 
int main()
{ 
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    fastio;

    vll primeNumber;
    vector<bool> check(1e6+5, 1);
    check[0] = check[1] = 0;
    for(ll i = 2; i<=1e6; i++){
        if(check[i]){
            for(ll j = i*i; j<=1e6; j+=i)
                check[j] = false; 
            primeNumber.push_back(i*i);
        }
    }

    int n; 
    cin>>n; 

    while(n--){
        ll no; 
        cin>>no; 

        if(bs(primeNumber, no))
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    
    return 0;
}

