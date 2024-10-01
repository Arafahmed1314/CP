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

int x,y;
cin>>x>>y;
for(int i=x;i<=y;i++){
    if(i>9){
        if(i%2==0)cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    }
    else{
 if(i==1)cout<<"one"<<endl;
 else if(i==2)cout<<"two"<<endl;
 else if(i==3)cout<<"three"<<endl;
 else if(i==4)cout<<"four"<<endl;
 else if(i==5)cout<<"five"<<endl;
 else if(i==6)cout<<"six"<<endl;
 else if(i==7)cout<<"seven"<<endl;
 else if(i==8)cout<<"eight"<<endl;
 else if(i==9)cout<<"nine"<<endl;
 }




}
}

int main(){
    speed();
    solve();
    return 0;
}