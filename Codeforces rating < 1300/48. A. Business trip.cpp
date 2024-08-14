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

    priority_queue<int> pq; 
    for(int i = 0;i<12; i++){
        int no; cin>>no; 

        pq.push(no); 
    }
    
    int count = 0; 
    while(k > 0 && !pq.empty()){
        k -= pq.top(); 
        count++; 
        pq.pop(); 
    }

    if(k <= 0)
        cout << count << endl;
    else 
        cout << -1 << endl;

    return 0;
}

