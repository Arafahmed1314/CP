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
    cin >> n;
    int arr[n];

    int maximum=INT_MIN;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
maximum=max({maximum, arr[i]});
    }

    int value = (n + 1) / 2;
    cout <<  value+maximum<< endl;

}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}