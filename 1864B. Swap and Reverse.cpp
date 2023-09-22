#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

using ll = long long;
using str = string;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define mp make_pair
#define f first
#define s second

using vi = vector<int>;
using vl = vector<ll>;
using vs = vector<str>;
using vc = vector<char>;

#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define eb emplace_back

const int mod = 998244353; // 1e9+7;

void solve() {
    int n, k;
    cin >> n >> k;

    str s;
    cin >> s;

    vc even, odd;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) even.pb(s[i]);
        else odd.pb(s[i]);
    }

    sort(all(even));
    sort(all(odd));

    if (k % 2 == 0) {
        sort(all(s));
        cout << s << '\n';
    } else {
        int evencnt = 0, oddcnt = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) cout << even[evencnt++];
            else cout << odd[oddcnt++];
        }
        cout << '\n';
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) solve();

    return 0;
}