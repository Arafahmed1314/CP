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
    string a, b;
    cin >> a >> b;
    string find;
    for(int i = 0; i < a.length(); i++){
        bool found = false; 
        for(int j = 0; j < b.length(); j++){
            if(a[i] == b[j]){
                found = true; 
                break; 
            }
        }
        if(!found) {
            find.push_back(a[i]);
        }
    }
    cout << find << endl;
}

int main(){
    speed();
    solve();
    return 0;
}
