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
    int x, y, k;
    cin >> x >> y >> k;

    int n1 = (x + k - 1) / k;
    int n2 = (y + k - 1) / k;


    int result = max(2 * n1 - 1, 2 * n2);

    cout << result << endl;
}

int main(){
    speed();
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
