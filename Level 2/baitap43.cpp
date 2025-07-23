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
int a[maxn], cnt[200];

void solve(){

    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        if (a[i] == 25) cnt[25]++;

        if (a[i] == 50) {
            if(cnt[25] > 0)  {
                cnt[50]++;
                cnt[25]--;
            } else {
                cout << "NO";
                return;
            }
        }

        if (a[i] == 100) {
            if (cnt[50] >= 1 && cnt[25] >= 1) {
                cnt[50]--;
                cnt[25]--;
            } else if (cnt[25] >= 3) cnt[25] -= 3;
            else {
                cout << "NO";
                return;
            }
        }
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
//link submit : https://www.hsg.edu.vn/index.php/hsg/baitap/43
