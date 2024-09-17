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

    int i = 0; 

    string ans = "";

    // Get the first 0 after the first 1
    for(; i<s.length(); i++){
        if(s[i] == '0')
            break;
        else
            ans += s[i];
    }

    if(i == s.length()){
        s.pop_back();
        cout << s << endl;
    }
    else{
        i++;
        while(i<s.length())
            ans += s[i++];
        cout << ans << endl;
    }

    
    return 0;
}

