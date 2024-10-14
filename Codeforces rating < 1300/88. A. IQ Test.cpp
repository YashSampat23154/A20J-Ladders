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
    
    char arr[4][4]; 
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cin >> arr[i][j]; 
        }
    }

    bool check = false; 
    int countBlack = 0, countWhite = 0; 

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){

            countBlack = 0, countWhite = 0;

            if(arr[i][j] == '.') countWhite++; 
            else countBlack++; 
            if(arr[i][j+1] == '.') countWhite++; 
            else countBlack++; 
            if(arr[i+1][j] == '.') countWhite++; 
            else countBlack++; 
            if(arr[i+1][j+1] == '.') countWhite++; 
            else countBlack++; 

            if(countBlack >= 3 || countWhite >= 3)
                check = true; 
        }
    }

    if(check)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    
    return 0;
}
