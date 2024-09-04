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
    
    int arr[5][5] = {0};
    for(int i = 0; i<5; i++)
        for(int j = 0; j<5; j++)
            cin>>arr[i][j];

    string s = "01234";

    ll ans = 0;
    do{

        ll temp = arr[s[0]-'0'][s[1]-'0'] + arr[s[1]-'0'][s[0]-'0'] + arr[s[2]-'0'][s[3]-'0'] + arr[s[3]-'0'][s[2]-'0'];
        temp += arr[s[1]-'0'][s[2]-'0'] + arr[s[2]-'0'][s[1]-'0'] + arr[s[3]-'0'][s[4]-'0'] + arr[s[4]-'0'][s[3]-'0'];
        temp += arr[s[2]-'0'][s[3]-'0'] + arr[s[3]-'0'][s[2]-'0'];
        temp += arr[s[3]-'0'][s[4]-'0'] + arr[s[4]-'0'][s[3]-'0'];

        ans = max(ans, temp);
    }while(next_permutation(s.begin(), s.end()));

    cout << ans << endl;
    
    return 0;
}

