#include <algorithm>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
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

const int mod = 998244353; // 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    int sum = 0;
    vi arr(n);
    for (auto &x : arr)
    {
        cin >> x;
        sum += x;
    }

    if (sum % 3 == 0)
    {
        cout << 0 << '\n';
        return;
    }
    if (sum % 3 == 2)
    {
        cout << 1 << '\n';
        return;
    }

    for (auto x : arr)
    {
        if (x % 3 == 1)
        {
            cout << 1 << '\n';
            return;
        }
    }

    cout << 2 << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    while (tc--)
        solve();

    return 0;
}
