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
   int a, b, c;
        cin >> a >> b >> c;

        int area= a * b;
          int f=0;

        for (int i = 1; i*i <= c; i+= 2) {
            int t = i*i;
            if(t*c>area)f++;


        }
        if(f!=0){
            cout<<"NO"<<endl;
        }else cout<<"YES"<<endl;


}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}