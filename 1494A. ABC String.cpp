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
    str s;
	cin >> s;

    int n = sz(s);
    if (s[0] == s[n - 1]) cout << "NO\n";
    else {
		int first = 0, last = 0;

        for (int i = 0; i < n; i++) {
        	if (s[i] == s[0]) first++;
            if (s[i] == s[n - 1]) last++;
		}

        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (first > last) {
                if (s[i] == s[0]) sum++;
                else sum--;
            } else {
                if (s[i] == s[n - 1]) sum--;
                else sum++;
            }

            if (sum < 0) {
                cout << "NO\n";
                break;
            }
        }

		if (sum == 0) cout << "YES\n";
        else if (sum > 0) cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    while (tc--) solve();

    return 0;
}
