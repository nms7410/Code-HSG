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
int a[maxn];

void solve(){

    cin >> n;

    for (int i = 1; i <= n; ++i) cin >> a[i];

    int result = 0, length = 0, pos_start = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] * a[i + 1] < 0) length++;
        else {
            if(length > result) {
                result = length;
                pos_start = i - length;
            }
            length = 0;
        }
    }

    if(result == 0) {
        cout << "Khong tim thay";
        return;
    }

    cout << result + 1 << el;

    int pos_end = result + 2;
    for (int i = pos_start; i <= pos_end; ++i) cout << a[i] << " ";

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
//link submit : https://www.hsg.edu.vn/index.php/hsg/baitap/34
