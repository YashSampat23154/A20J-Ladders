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
    
    int n, k; 
    cin>>n>>k; 

    int arr[n]; 
    for(int i = 0; i<n; i++)
        cin>>arr[i]; 

    int sum = 0;
    for(int i = 0; i<k; i++)
        sum += arr[i]; 

    int mini = sum;
    int index = 0;

    for(int i = k; i<n; i++){
        sum += arr[i] - arr[i-k]; 
        if(sum < mini){
            mini = sum; 
            index = i-k+1;
        }
    }

    cout << index+1 << endl;
    
    return 0;
}

