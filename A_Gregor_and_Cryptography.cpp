#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void speed(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
}

void solve(){
    int n;
    cin >> n;

    int a = 2;
    int b = 0;
    int limit = n > 10 ? sqrt(n) + 1 : n - 1;

    for (int i = 3; i <= limit; i++) {
        if (n % a == n % i) {
            b = i;
            break;
        }
    }

    if (b == 0) {
 
        for (int i = 3; i < n; i++) {
            if (n % a == n % i) {
                b = i;
                break;
            }
        }
    }

    cout << a << " " << b << endl;
}

int main(){
    speed();
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
