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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    while (tc--) {
		int n, x, y;
    	cin >> n >> x >> y;

		if (x > y) swap(x, y);

		if (x || !y || (n - 1) % y) {
			cout << -1 << '\n';
			continue;
		}

		for (int k = 2; k <= n; k += y) {
			for (int i = 1; i <= y; i++) cout << k << ' ';
		}

		cout << '\n';
	}

    return 0;
}
