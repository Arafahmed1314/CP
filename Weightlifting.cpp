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
    int d,x,y;
    cin>>d>>x>>y;
    if(x*(d/100)<=y)cout<<0<<endl;
    else{
int count=y;
int i=0;
int p=d;
while(y--){
    i++;
    p*i;
    count--;
if(x<=y){
cout<<0<<endl;
break;}
int per=x*((100-p)/100)
if(count<=per){
    cout<<i<<endl;
  break;
}}
}
}

int main(){
    speed();
    ll t;
     solve();
    return 0;
}
