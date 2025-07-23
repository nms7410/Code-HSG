#include <bits/stdc++.h>

#define int long long
#define ll long long
#define ull unsigned long long
#define str string
#define ii pair<ll, ll>
#define fi first
#define se second
#define el '\n'

#define TASK "filename"

const int maxn = 1e3+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

str s;

bool kydieu(str s){

    for(int i = 0; i < s.size();){
        if(s.substr(i, 3) == "144") i += 3;
        else if(s.substr(i, 2) == "14") i += 2;
        else if(s[i] == '1') i++;
        else return 0;
    }

    return 1;
}

void solve(){

    cin >> s;

    if(kydieu(s)) cout << "YES";
    else cout << "NO";

}

signed main(){

    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    if(fopen(TASK".inp", "r")){
        freopen(TASK".inp", "r", stdin);
        freopen(TASK".out", "w", stdout);
    }

    solve();

    return 0;

}
//link submit : https://www.hsg.edu.vn/index.php/hsg/baitap/42
