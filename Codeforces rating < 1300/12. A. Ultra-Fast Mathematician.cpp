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
    
    string s1, s2, s3=""; 
    cin>>s1>>s2; 

    for(int i = 0; i<s1.length(); i++){
        if((s1[i] == '1' && s2[i] == '0') || (s1[i] == '0' && s2[i] == '1'))
            s3+='1';
        else 
            s3+='0';  
    }
    
    cout << s3 << endl;

    return 0;
}

