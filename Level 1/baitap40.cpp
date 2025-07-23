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

int n;

void solve(){

    cin >> n;

    int agree = 0;
    for(int i = 1; i <= n; ++i){
        int p, v, t; cin >> p >> v >> t;

        if(p + v + t >= 2) agree++;

    }
    cout << agree;
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
//link submit : https://www.hsg.edu.vn/index.php/hsg/baitap/40
