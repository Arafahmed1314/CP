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
    string s;
    int l;
    cin>>l>>s;
    int value=sqrt(l);
if(value*value==l){
    int zero=0;
for(int i=0; i<l;i++){
if(s[i]=='0')zero++;
}
if(pow((value-2),2)==zero)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
else{
    cout<<"No"<<endl;
}


}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}