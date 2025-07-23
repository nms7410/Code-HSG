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
bool prime[maxn];

void sieve(){

    prime[0] = prime[1] = 1;

    for(int i = 2; i * i <= n; ++i){
        if(!prime[i]){
            for(int j = i * i; j <= n; j += i){
                prime[j] = 1;
            }
        }
    }

}

void solve(){

    cin >> n;

    sieve();

    for(int i = 1; i <= n; ++i) if(!prime[i]) cout << i << " ";

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
//link submit : https://www.hsg.edu.vn/index.php/hsg/baitap/22
