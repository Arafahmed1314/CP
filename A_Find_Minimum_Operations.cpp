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
    ll a,b;
    cin>>a>>b;
    int count=0;
    if(b==1)cout<<a<<endl;

    else{
      while(a>0){
        count+=a%b;
        a=a/b;
      }

cout<<count<<endl;
        }



}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}