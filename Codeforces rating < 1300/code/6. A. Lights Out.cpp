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
    
    int arr[3][3]; 
    for(int i = 0; i<3; i++)
        for(int j = 0; j<3; j++)
            arr[i][j] = 1; 

    for(int i = 0; i<3; i++)
        for(int j = 0; j<3; j++){
            int n; 
            cin>>n; 
            n = n%2; 

            if(n == 0) continue; 

            // i-1,j; i+1,j; i,j-1; i,j+1; i,j;
            if(i-1 >= 0)
                arr[i-1][j] = (arr[i-1][j]+1)%2;
            if(i+1 < 3)
                arr[i+1][j] = (arr[i+1][j]+1)%2;
            if(j-1 >= 0)
                arr[i][j-1] = (arr[i][j-1]+1)%2;
            if(j+1 < 3)
                arr[i][j+1] = (arr[i][j+1]+1)%2;

            arr[i][j] = (arr[i][j] + 1)%2; 

        }

        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++)
                cout << arr[i][j];
            cout << endl;
        }
            
            
    
    return 0;
}

