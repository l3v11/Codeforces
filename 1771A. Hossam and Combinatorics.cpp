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

using pi = pair<int, int>;
using pl = pair<ll, ll>;
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

const int mod = 1000000007;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        ll n;
        cin >> n;

        vl a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];

        ll mx = *max_element(all(a));
        ll mn = *min_element(all(a));

        ll cmx = count(all(a), mx);
        ll cmn = count(all(a), mn);

        if (mx == mn) cout << n * (n - 1) << '\n';
        else cout << 2 * cmn * cmx << '\n';
    }

    return 0;
}