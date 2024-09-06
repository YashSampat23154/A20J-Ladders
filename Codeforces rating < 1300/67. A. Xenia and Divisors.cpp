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
    
    int n; cin>>n; 

    int arr[8] = {0}; 
    for(int i = 0; i<n; i++){
        int no; 
        cin>>no; 

        arr[no]++; 
    }

    if(arr[7] || arr[5] || (arr[3] > arr[6]) || (arr[6] > arr[3] + arr[2]) || (arr[4] > arr[2]) || (arr[1] != arr[2] + arr[3]) || (arr[2] != arr[4] + arr[6] - arr[3])){
        cout << -1 << endl;
    }
    else{
        
        while(arr[4]){
            cout << 1 << " " << 2 << " " << 4 << endl;
            arr[4]--;
            arr[2]--; 
        }
            

        
        while(arr[6] && arr[2]--){
            cout << 1 << " " << 2 << " " << 6 << endl;
            arr[6]--;
        }
            
        
        while(arr[6]-- && arr[3]--)
            cout << 1 << " " << 3 << " " << 6 << endl;

    }
    
    return 0;
}

