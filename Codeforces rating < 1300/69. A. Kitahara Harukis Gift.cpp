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
    int sum = 0; 
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        arr[i] /= 100; 
        sum+=arr[i];
    }

    if(sum%2)
        cout << "NO" << endl;
    else{
        sort(arr, arr+n); 
        sum = sum/2; 
        bool check = false; 
        for(int i = n-1; i>=0; i--){
            if(arr[i] <= sum)
                sum -= arr[i]; 
            if(sum == 0){
                check = true; 
                break;
            }
        }
        if(check)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    

    
    
    return 0;
}

