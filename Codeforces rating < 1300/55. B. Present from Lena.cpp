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

    string s = "";

    for(int i = 0; i<=n; i++){

        //space
        for(int j = 0; j<n-i; j++)
            s+="  ";

        //elements till mid
        for(int j = 0; j<=i; j++)
            s += to_string(j) + " "; 
        
        // element after mid
        for(int j = i-1; j>=0; j--)
            s += to_string(j) + " ";

        s = s.substr(0, s.length()-1); 
        cout << s << endl;
        s = "";
    }

    for(int i = 1; i<=n; i++){

        for(int j = 0; j<i; j++)
            s += "  ";

        for(int j = 0; j<=n-i; j++)
            s += to_string(j) + " "; 

        for(int j = n-i-1; j>=0; j--)
            s += to_string(j) + " ";

        s = s.substr(0, s.length()-1); 
        cout << s << endl;
        s="";
    }
    
    return 0;
}

