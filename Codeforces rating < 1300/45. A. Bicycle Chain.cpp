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
    
    int n, m;
    cin>>n;

    int arr1[n]; 
    for(int i = 0; i<n; i++)
        cin>>arr1[i];

    cin>>m; 

    int arr2[m];
    for(int i = 0; i<m; i++)
        cin>>arr2[i]; 

    int maxi = -1; 
    int count = 0;

    for(int i = m-1; i>=0; i--){
        for(int j = n-1; j>=0; j--){
            if(arr2[i]%arr1[j] == 0){
                if(arr2[i]/arr1[j] > maxi){
                    maxi = arr2[i]/arr1[j]; 
                    count = 1; 
                }
                else if (arr2[i]/arr1[j] == maxi)
                    count++;
            }
        }
    }

    cout << count << endl;
    
    return 0;
}

