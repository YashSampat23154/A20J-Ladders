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
    
    string s; 
    cin>>s; 

    bool check; 
    int n = s.length(); 

    for(int i = 0; i<n; i++){

        check = false; 

        if(s[i] == '1' && (i+1 < n && s[i+1] == '4') && (i+2 < n && s[i+2] == '4')){
            check = true; 
            i+=2; 
        }
        else if(s[i] == '1' && (i+1 < n && s[i+1] == '4')){
            check = true; 
            i+=1; 
        }
        else if(s[i] == '1'){
            check = true; 
        }
        else
            break;
    }

    if(check)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    
    return 0;
}

