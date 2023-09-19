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

#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define eb emplace_back

const int mod = 998244353; // 1e9+7;

void solve() {
    int n, m;
    cin >> n >> m;

    vl a(n);
    int b, A1 = 0, A = 0, B = 0;
    for (ll i = 0; i < n; i++) cin >> a[i];

    for (ll i = 0; i < m; i++) {
        cin >> b;
        B |= b;
    }

    for (ll i = 0; i < n; i++) {
        A ^= a[i];
        A1 ^= a[i] | B;
    }

    if (n % 2 == 0) {
        cout << A1 << " " << A << '\n';
    } else {
        cout << A << " " << A1 << '\n';
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) solve();

    return 0;
}