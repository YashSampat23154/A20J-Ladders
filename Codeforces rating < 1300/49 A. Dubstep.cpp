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
    
    string s; 
    cin>>s; 

    if(s.length() < 3)
        cout << s << endl;
    else{
        int right = s.length()-1; 
        while(true){
            if(s[right] == 'B' && s[right-1] == 'U' && s[right-2] == 'W'){
                right-=3; 
            }
            else 
                break;
        }

        int left = 0; 
        while(left <= right){
            if(s[left] == 'W' && s[left+1] == 'U' && s[left+2] == 'B'){
                left+=3; 
            }
            else 
                break;
        }

        string ans = ""; 
        string temp = "";

        while(left <= right){
            if(s[left] == 'W' && s[left+1] == 'U' && s[left+2] == 'B'){
                left+=3;
                if(temp.length() != 0)
                    ans+=temp+" "; 
                temp = ""; 
            }
            else
                temp += s[left++]; 
        }

        ans+=temp+" ";
        cout << ans.substr(0, ans.length()-1) << endl;   
    }

     
    
    return 0;
}

