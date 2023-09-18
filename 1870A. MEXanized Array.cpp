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

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        int n, k, x;
        cin >> n >> k >> x;

        if (k > n || (k - 1) > x) cout << "-1" << '\n';
        else {
            int sum = k * (k - 1) / 2;

            n -= k;
            sum += ((k == x) ? x - 1 : x) * n;

            cout << sum << '\n';
        }
    }

    return 0;
}