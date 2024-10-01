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
    ll n;
    cin >> n;

    ll count = 0;
    for (ll d = 1; d <= 9; ++d) {
        ll ordinary = d;
        while (ordinary <= n) {
            count++;
            ordinary = ordinary * 10 + d;
        }
    }

    cout << count << endl;
}

int main(){
    speed();
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
