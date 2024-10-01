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
    cin >> n;
    char arr[n][4];  // Removed the '='

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 4; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = n - 1; i >= 0; i--){
        int count = 0;
        for(int j = 3; j >= 0; j--){
            if(arr[i][j] == '#'){
                count = j + 1;
                break;
            }
        }
        cout << count << " ";
    }
    cout << endl;
}

int main(){
    speed();
    ll t; cin >> t;
    while(t--) solve();
    return 0;
}
