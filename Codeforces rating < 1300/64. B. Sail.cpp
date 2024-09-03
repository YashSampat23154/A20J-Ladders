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
    
    int t, sx, sy, ex, ey; 
    string s; 
    cin>>t>>sx>>sy>>ex>>ey>>s; 

    bool north, east; 
    ll countUp = 0, countRight = 0;

    if(ex>=sx)
        east = true;
    else 
        east = false; 
    countRight = abs(ex-sx); 


    if(ey>=sy)
        north = true;
    else 
        north = false; 
    countUp = abs(ey-sy); 

    int i = 0;
    for(; i<s.length(); i++){
        char ch = s[i]; 
        if(ch == 'N' && north && countUp)
            countUp--; 
        if(ch == 'S' && !north && countUp)
            countUp--; 
        if(ch == 'E' && east && countRight)
            countRight--;
        if(ch == 'W' && !east && countRight)
            countRight--; 

        if(!countUp && !countRight)
            break;
    }  

    if(!countUp && !countRight)
        cout << i+1 << endl;
    else 
        cout << -1 << endl;

    
    return 0;
}

