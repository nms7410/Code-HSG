#include <bits/stdc++.h>

#define int long long
#define ull unsigned long long
#define str string
#define ii pair<int, int>
#define fi first
#define se second
#define el '\n'

#define TASK "filename"

const int maxn = 3e4+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

int n;

void solve(){

    cin >> n;

    int minn = inf, x = 0, y = 0, p = 0;
    for (int a = 1; a <= n; ++a) {

        int b = sqrt(a * a - n);

        if (a * a - b * b == n) {
            p++;
            if(a - b < minn) {
                minn = a - b;
                x = a;
                y = b;
            }

        }

    }

    if (p == 0) cout << -1;
    else cout << x << " " << y;

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
//link submit : https://www.hsg.edu.vn/index.php/hsg/baitap/35
