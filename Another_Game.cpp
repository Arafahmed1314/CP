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
    cin>>n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];

    }

     if (is_sorted(v.begin(), v.end())) {
        cout << 0 << endl;
    }
   else{
    sort(v.begin(), v.end());
    int ans=v[0]+v[n-1];
    cout<<ans<<endl;
   }


}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}