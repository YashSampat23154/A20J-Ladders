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

    map<int, vector<int>> mp; 

    for(int i=0; i<n; i++){
        int no; 
        cin>>no;
        mp[no].push_back(i); 
    }

    vector<pair<int, int>> ans; 
    for(auto it: mp){
        if(it.second.size() == 1)
            ans.push_back({it.first, 0});
        else{
            int diff = (it.second[it.second.size()-1] - it.second[0])/(it.second.size()-1);

            bool check = true; 
            for(int j = 1; j<it.second.size(); j++){
                if(it.second[j] - it.second[j-1] != diff){
                    check = false; 
                    break;
                }
            }
            if(check)
                ans.push_back({it.first, diff});
        }
    }

    cout << ans.size() << endl;
    for(int i=0; i<ans.size(); i++)
        cout << ans[i].first << " " << ans[i].second << endl;
    
    return 0;
}

