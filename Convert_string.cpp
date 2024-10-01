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
    ll len; cin>> len;
    string s; cin >> s;

    ll cnt0=0,cnt1=0;

    for(int x=0; x<len; x++){
        if(s[x]=='0') cnt0++;
        else cnt1++;
    }

    if(cnt0==len || cnt1==len){
        ll ans=0;
        if(len%2==1) ans++;
        for(int x=2; x<=len; x+=2) ans++;

        cout << ans << endl;
    }
    else{
        ll ans=0;
        if(cnt0%2==0 and cnt1%2==0){
            ll get=min(cnt0,cnt1);
            for(int x=get; x<=len; x+=2) ans++;
        }
        else if(cnt0%2==1 && cnt1%2==1){
            ll get=min(cnt0,cnt1);
            for(int x=get; x<=len; x+=2) ans++;
        }
        else{
            for(int x=cnt0; x<=len; x+=2) ans++;
            for(int x=cnt1; x<=len; x+=2) ans++;
        }

        cout << ans << endl;
    }

}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}