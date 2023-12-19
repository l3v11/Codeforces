#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

using ll = long long;
using ld = long double;
using str = string;

using pii = pair<int, int>;
using pll = pair<ll, ll>;
#define mp make_pair
#define f first
#define s second

using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<ld>;
using vs = vector<str>;
using vc = vector<char>;

#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define eb emplace_back

const int mod = 998244353; // 1e9+7;

void solve() {
    int n;
    cin >> n;

    str s;
    cin >> s;

    vi arr(26, 0);
    for (int i = 0; i < n; i++) arr[s[i] - 'A']++;

    int ans = 0;
    for (int i = 0; i < 26; i++) {
        ans += arr[i] >= i + 1;
    }

	cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    while (tc--) solve();

    return 0;
}
