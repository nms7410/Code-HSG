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

const int maxn = 1e2+100;
const int inf  = 1e18;
const int MOD  = 1e9+7;

using namespace std;

int n;

bool prime(int n){

    if(n <= 1) return 0;

    if(n <= 3) return 1;

    if(n % 2 == 0 || n % 3 == 0) return 0;

    for(int i = 5; i * i <= n; i += 6){
        if(n % i == 0 || n % (i + 2) == 0) return 0;
    }

    return 1;
}

void solve(){

    cin >> n;

    if(prime(n)) cout << "YES";
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
//link submit : https://www.hsg.edu.vn/index.php/hsg/baitap/19
