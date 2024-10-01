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
    int a,b;
    cin>>a>>b;
    int arr[a];
      int max=INT_MIN;
       int zero=0;
    for(int i=0;i<a;i++){
        cin>>arr[i];
           if(arr[i]>max)max=arr[i];
             if(arr[i]==0)zero++;
    }
if(zero==0)cout<<"0"<<endl;

else if(max<zero)cout<<max<<endl;
else{
cout<<zero<<endl;
}
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}