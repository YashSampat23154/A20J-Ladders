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

    int five = 0, zero = 0; 
    for(int i = 0; i<n; i++){
        int no; 
        cin>>no; 
        if(no == 5)
            five++;
        else 
            zero++; 
    }

    if(zero == 0)
        cout << -1 << endl;
    else if(five < 9)
        cout << 0 << endl;
    else{ 
        for(int i = 0; i<five/9; i++){
            for(int j = 0; j<9; j++)
                cout << 5;
        } 
        for(int i = 0; i<zero; i++)
            cout << 0; 
        
        cout << endl;
    }
    
    return 0;
}

