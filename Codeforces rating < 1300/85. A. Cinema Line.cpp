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

    int t = 0, f = 0; 
    bool check = true; 
    for(int i = 0; i<n; i++){
        int no; 
        cin>>no; 

        if(no == 25)
            t++; 
        else if (no == 50){
            if(t)
                t--;
            else{
                check = false; 
                break;
            }
            f++;
        }
        else{
            if (f && t){
                f--; 
                t--; 
            }
            else if(t>=3)
                t-=3; 
            else{
                check = false; 
                break;
            }
        }
    }

    if(check)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
    
    return 0;
}

