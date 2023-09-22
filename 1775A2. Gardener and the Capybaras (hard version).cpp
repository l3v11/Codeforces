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
    str s;
    cin >> s;

    if (s[1] == 'a') cout << s[0] << ' ' << s[1] << ' ' << s.substr(2, sz(s) - 2) << '\n';
    else cout << s[0] << ' ' << s.substr(1, sz(s) - 2) << ' ' << s[sz(s) - 1] << '\n';
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) solve();

    return 0;
}