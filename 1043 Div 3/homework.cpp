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
    int n;
    cin>>n;
    string a, b,c;
    cin>>a;
    int m;
    cin>>m;
    cin>>b>>c;
    string start = "", ed = "";
    for(int i=0;i<m;i++){
        if(c[i] == 'V') start+=b[i];
        else ed+=b[i];
    }
    reverse(start.begin(), start.end());
    cout<<start<<a<<ed<<ln;
    }

 return 0; 
}        
    
