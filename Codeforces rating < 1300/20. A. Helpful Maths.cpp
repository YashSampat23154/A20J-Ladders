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

    vector<int> arrange; 

    for(int i = 0; i<s.length(); i+=2){
        if(s[i] == '1')
            arrange.push_back(1);
        else if(s[i] == '2')
            arrange.push_back(2);
        else 
            arrange.push_back(3);
    }

    sort(arrange.begin(), arrange.end()); 


    for(int i = 0; i<arrange.size()-1; i++){
        cout << arrange[i] << "+";
    }
         
    cout << arrange[arrange.size()-1] << endl;
    
    return 0;
}

