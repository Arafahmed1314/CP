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
    cin>>s;

    string letter="abcdefghijklmnopqrstuvwxyz";
    int charIndex=0;
    char letterIndex=s[0];
    bool flag=false;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){charIndex=i;
        letterIndex=s[i];
        flag=true;
        break;}
    }
    if(!flag){
        char lastChar=s[s.size()-1];
  int findIndex=letter.find(lastChar);
  if(findIndex==25)findIndex=0;
  else findIndex++;
  char newChar=letter[findIndex];
  cout<<s+newChar<<endl;
    }

    else{
    string fstsub=s.substr(0,charIndex+1);
    string sndsub=s.substr(charIndex+1);
    int idx;
    if(s.size()==1)
    idx=letter.find(s[0]);
else
     idx=letter.find(letterIndex);
    if(idx==25)idx=0;
    else idx++;
    char extra=letter[idx];
    string finalAns=fstsub+string(1,extra)+sndsub;
    cout<<finalAns<<endl;
}}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}