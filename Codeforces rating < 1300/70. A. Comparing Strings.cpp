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
    
    string s1, s2; 
    cin>>s1>>s2; 

    if(s1.length() != s2.length())
        cout << "NO" << endl;
    else{
        int count = 0; 
        int arr[2]; 

        for(int i = 0; i<s1.length(); i++){
            if(s1[i] != s2[i]){
                arr[count++] = i; 
                if(count > 2)
                    break;
            }
        }

        if(count != 2)
            cout << "NO" << endl;
        else{
            if(s2[arr[0]] == s1[arr[1]] && s2[arr[1]] == s1[arr[0]])
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
    }
    
    return 0;
}

