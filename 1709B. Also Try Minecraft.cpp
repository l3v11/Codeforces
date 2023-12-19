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
    int n, m;
    cin >> n >> m;
	
    vl arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
	
	vl left(n);
    for (int i = 1; i < n; i++) {
		int a = 0;
        if (arr[i - 1] - arr[i] > 0)
			a = arr[i - 1] - arr[i];
		
		left[i] = left[i - 1] + a;
    }
	
	vl right(n);
    for (int i = n - 2; i >= 0; i--) {
        int a = 0;
        if (arr[i + 1] - arr[i] > 0)
			a = arr[i + 1] - arr[i];
		
        right[i] = right[i + 1] + a;
    }
	
    while (m--) {
        int s, t;
        cin >> s >> t;
		
        if (s < t) cout << left[t - 1] - left[s - 1] << '\n';
        else cout << right[t - 1] - right[s - 1] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin >> tc;

    while (tc--) solve();

    return 0;
}
