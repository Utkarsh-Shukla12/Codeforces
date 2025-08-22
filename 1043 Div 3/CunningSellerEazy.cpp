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

bool isPowerOf3( ll a, ll b)
{
     double p = log10(a) / log10(b);
    // checking to see if power is an integer or not
    if (p - (int)p == 0) {
       return true;
    }
   return false;
}
    
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    ll ans = 0;
    vector<int> res(30, 0);
    int i=0;
    while(n>0){
        res[i] = n % 3;
        n/=3;
        i++;
    }
    for(int i=0; i<30;i++){
            ans += (pow(3, i+1) + (i * pow(3,i-1))) * res[i];
        }
       cout<<ans<<endl;
    }
 return 0; 
}        
    
