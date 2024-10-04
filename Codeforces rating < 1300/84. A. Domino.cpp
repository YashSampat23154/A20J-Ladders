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

    int ee = 0, eo = 0, oe = 0, oo = 0, sumA = 0, sumB = 0; 
    for(int i = 0; i<n; i++){
        int a, b; 
        cin>>a>>b; 

        if(a%2 == 0 && b%2 == 0)
            ee++; 
        else if (a%2 == 0 && b%2 != 0)
            eo++;
        else if (a%2 != 0 && b%2 == 0)
            oe++;
        else
            oo++; 

        sumA+=a; 
        sumB+=b;   
    }

    if(sumA%2 == 0 && sumB%2 == 0)
        cout << 0 << endl;
    else if ((sumA%2 == 0 && sumB%2 != 0) || (sumA%2 != 0 && sumB%2 == 0))
        cout << -1 << endl;
    else{
        if(eo || oe)
            cout << 1 << endl;
        else 
            cout << -1 << endl;
    }
    
    
    return 0;
}

