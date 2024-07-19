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
    
    int n; 
    cin>>n; 

    int arr[n]; 

    for(int i =0; i<n; i++)
        cin>>arr[i]; 

    int ans = 0;
    int index = 0; 

    for(int i = 0; i<n-1; i++){
        if(arr[index] >= arr[i+1])
            index = i+1; 
    }

    for(int i = index; i<n-1; i++){
        swap(arr[i], arr[i+1]); 
        ans++; 
    }

    index = n-1;
    for(int i = n-1; i>0; i--){
        if(arr[index] <= arr[i-1])
            index = i-1; 
    }

    for(int i = index; i>0; i--){
        swap(arr[i], arr[i-1]);
        ans++; 
    }
   
    cout << ans << endl; 
    
    return 0;
}

