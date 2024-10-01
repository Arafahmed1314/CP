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
    int x,y,z;
    cin>>x>>y>>z;
    if(y-x==z-y)cout<<"0"<<endl;
    else cout<<"1"<<endl;

}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}