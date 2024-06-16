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

    int digit1 = 0, digit2 = 1, digit3 = 0, digit4 = 0;


    while(digit1 == digit2 || digit1 == digit3 || digit1 == digit4 || digit2 == digit3 || digit2 == digit4 || digit3 == digit4){

        int new_n = ++n; 
        digit4 = new_n%10; 
        new_n/=10; 
        digit3 = new_n%10; 
        new_n/=10;
        digit2 = new_n%10; 
        new_n/=10; 
        digit1 = new_n%10; 
        new_n/=10;  

    }

    cout << n << endl;

    return 0;
}

