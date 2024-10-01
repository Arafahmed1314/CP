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
    ll arr[n];
    ll sum=0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i<n-2)sum+=arr[i];
    }
    int lastValue=arr[n-1];
    int secondLastValue=arr[n-2];
    int answer=lastValue-secondLastValue;
    cout<<sum+answer<<endl;


}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}