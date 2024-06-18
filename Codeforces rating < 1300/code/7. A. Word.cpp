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


string makeUpperCase(string s){
    for(int i = 0; i<s.length(); i++)
        if(s[i] >= 97 && s[i] <= 122)\
            s[i] -= 32;

    return s; 
}

string makeLowerCase(string s){
    for(int i = 0; i<s.length(); i++)
        if(s[i] >= 65 && s[i] <= 90)\
            s[i] += 32;

    return s;
}
 
int main()
{ 
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    fastio;
    
    string s; 
    cin>>s; 

    int totalUpper = 0; 
    for(int i = 0; i<s.length(); i++)
        if(s[i] >= 65 && s[i] <= 90)
            totalUpper++; 

    if(totalUpper > s.length() - totalUpper)
        cout << makeUpperCase(s) << endl;
    else 
        cout << makeLowerCase(s) << endl;
    
    return 0;
}

