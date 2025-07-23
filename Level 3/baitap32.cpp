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

int n;
int a[maxn], cnt[maxn];

void solve(){

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        cnt[a[i]]++;
    }

    int result = 0;
    for (int i = 1; i <= maxn; ++i) {
        int x = cnt[i];
        if (x >= 2) result += x * (x - 1) / 2;
    }

    cout << result;
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
//link submit : https://www.hsg.edu.vn/index.php/hsg/baitap/32



