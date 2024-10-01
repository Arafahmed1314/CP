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
    if(x==y)cout<<0<<endl;
   else{
    int i=0;
    int yy=y;

    while(y--){
        i++;
       cout <<"ck " << (x*(100-(d*i))/100) << endl;
       if((x*(100-(d*i))/100)<=yy-i){
        cout<<i<<endl;
        return;
       }
    }
    cout<<-1<<endl;
   }

}

int main(){
    speed();
    ll t;
    cin>>t;
    while(t--)
     solve();
    return 0;
}
