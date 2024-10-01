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
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n*2; j++){
if(i>=j || j>(n*2)-i)cout<<"*";
else cout<<"#";
        }
        cout<<endl;}
        cout<<endl;

}


int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}