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
      long A;
        cin >> A;

        if (A % 4 == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}