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
    
    int k; cin>>k; 
    string s; cin>>s; 

    int arr[26] = {0}; 
    for(int i=0; i<s.length(); i++){
        arr[s[i]-'a']++; 
    }

    bool check = 1; 
    string ans = "";

    for(int i = 0; i<26; i++)
        if(arr[i]%k != 0){
            check = 0; 
            break;
        }
        else{
            for(int j = 0; j<arr[i]/k; j++)
                ans+=('a'+ i);
        }

    string finalAns = "";
    for(int i = 0; i<k; i++)
        finalAns += ans;

    if(check)
        cout << finalAns << endl;
    else 
        cout << -1 << endl;
    
    return 0;
}

