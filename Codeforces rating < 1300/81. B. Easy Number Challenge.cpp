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
    
    vector<bool> check(1005, true);
    vi prime; 

    for(int i = 2; i*i<1000000; i++){
        if(check[i]){
            for(int j = i*i; j<1000; j+=i)
                check[j] = false;
            prime.push_back(i);
        }
    }

    vi divisor(1000005, 1); 
    divisor[1] = 1;

    for(int i = 2; i<=1000000; i++){
        int temp = i;
        for(int j = 0; j < prime.size(); j++){
            int count = 0; 
            while(temp%prime[j] == 0){
                temp /=prime[j]; 
                count++;
            }
            if(count!=0)
                divisor[i]*=count+1; 
            if(temp < prime[j]) break;
        }
    }

    int a, b, c; 
    cin>>a>>b>>c; 

    int ans = 0;

    for(int i = 1; i<=a; i++){
        for(int j = 1; j<=b; j++){
            for(int k = 1; k<=c; k++){
                ans = (ans + divisor[i*j*k])%1073741824;
            }
        }
    }

    cout << ans << endl;
    
    return 0;
}

