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
    int c=0;
    int temp=n;
    if(n<=2){
        cout<<"1"<<endl;
        return;
    }
  if(n%2==0){
    int two=temp/2;
    if(two%2==0)cout<<"0"<<endl;
    else cout<<"1"<<endl;
  }
  else{
    int temp1=n+1;
    int two=temp1/2;
if(two%2==0)cout<<"0"<<endl;
else cout<<"1"<<endl;
  }
}
int main(){
    speed();
  solve();
    return 0;
}