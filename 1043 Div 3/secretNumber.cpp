#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ln "\n"
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
    
int main()
{
    int t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    vector<ll> ans;
    ll cur = 10;
    while(cur +1 <= n){
        if(n%(cur+1)==0) ans.push_back(n/(cur +1));
        cur*=10;
    }
    sort(ans.begin(), ans.end());
    cout<<ans.size()<<ln;
    for(auto i : ans)cout<<i<<" ";
    if(ans.size()) cout<<ln;
    }

 return 0; 
}        
    
