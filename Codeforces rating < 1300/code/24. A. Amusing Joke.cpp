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
    
    string s1, s2, s3;
    cin>>s1>>s2>>s3; 

    s1 += s2; 
    sort(s1.begin(), s1.end()); 
    sort(s3.begin(), s3.end());

    bool check = true; 

    if(s1.length() == s3.length()){
        for(int i = 0; i<s1.length(); i++){
            if(s1[i] != s3[i]){
                check = false; 
                break;
            }
            if(!check) break;
        }
    }
    else 
        check = false; 

    if(check)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    
    return 0;
}

