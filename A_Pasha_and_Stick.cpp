#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fx(x) fixed<<setprecision(x)
using namespace std;

void speed() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}

void solve() {
    ll n;
    cin >> n;
    if(n%2==1)cout<<"0"<<endl;
    else{
   int r=n/2;
   if(r%2==0) {
    cout<<(r/2)-1<<endl;
   }
   else {
    cout<<(r/2)<<endl;
   }
    }


}

int main() {
    speed();
    solve();
    return 0;
}
