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
  string n;
  cin>>n;
  int fst=(int)n[0]-'0';
  int second=(int)n[1]-'0';
  cout<<(fst+second)<<endl;



}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}