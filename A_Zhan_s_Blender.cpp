#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fx(x) fixed<<setprecision(x)
using namespace std;

void speed(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int minimum=min(b,c);
      int ans = (a + minimum - 1) / minimum;
    cout<<ans<<endl;



}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}