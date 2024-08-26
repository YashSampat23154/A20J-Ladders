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
    
    int n,m; 
    cin>>n>>m;

    priority_queue<int> maxHeap; 
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for(int i = 0; i<m; i++){
        int no; 
        cin>>no; 
        maxHeap.push(no); 
        minHeap.push(no);
    }

    int maxi = 0, mini = 0, no;
    for(int i = 0; i<n; i++){
        no = minHeap.top();
        minHeap.pop();  
        mini += no;
        if(no-1 != 0)
            minHeap.push(no-1);
            
         
        no = maxHeap.top(); 
        maxi += no;
        maxHeap.pop(); 
        if(no-1 != 0)
            maxHeap.push(no-1); 
  
    }

    cout << maxi << " " << mini << endl;

    return 0;
}

