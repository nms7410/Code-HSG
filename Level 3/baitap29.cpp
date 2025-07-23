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
vector<int> v;

void phantich(int n){

    if (n == 0) {
        v.push_back(10);
        return;
    }
    if (n == 1) {
        v.push_back(1);
        return;
    }

    for (int i = 9; i >= 2; --i) {
        if (n % i == 0) {
            while (n % i == 0) {
                v.push_back(i);
                n /= i;
            }
        }
    }

    if (n != 1) {
        v.clear();
        v.push_back(-1);
    }
}

void solve(){

    cin >> n;

    phantich(n);

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) cout << v[i];

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
//link submit : https://www.hsg.edu.vn/index.php/hsg/baitap/29
