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
    ll n; cin >> n;
 int size = 2 * n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int dist = min({i, j, size - i - 1, size - j - 1});
            cout << n - dist << " ";
        }
        cout << endl;
    }

}

int main(){
    speed();
    ll t;
  solve();
    return 0;
}
