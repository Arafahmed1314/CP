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
  int a,b;
  cin>>a>>b;
  if((a==1 && b==3) || (a==3 && b==1))cout<<2<<endl;
  else if((a==1 && b==2) || (a==2 && b==1))cout<<3<<endl;
  else cout<<1<<endl;




}

int main(){
    speed();
    solve();
    return 0;
}