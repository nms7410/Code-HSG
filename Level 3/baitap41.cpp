#include <bits/stdc++.h>

#define int long long
#define ull unsigned long long
#define str string
#define ii pair<int, int>
#define fi first
#define se second
#define el '\n'

#define TASK "filename"

const int maxn = 1e5+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

int n, s;
ii a[maxn];

void solve(){

    cin >> s >> n;

    for (int i = 1; i <= n; ++i) cin >> a[i].fi >> a[i].se;

    sort(a + 1, a + n + 1);

    for (int i = 1; i <= n; ++i) {
        if(s <= a[i].fi) {
            cout << "NO";
            return;
        }
        s += a[i].se;
    }
    cout << "YES";
}

signed main(){

    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    if (fopen(TASK ".inp", "r")){
        freopen(TASK ".inp", "r", stdin);
        freopen(TASK ".out", "w", stdout);
    }

    solve();

    return 0;
}
//link submit : https://www.hsg.edu.vn/index.php/hsg/baitap/41
