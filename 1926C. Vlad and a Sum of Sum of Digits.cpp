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

const int mod = 998244353; // 1e9 + 7;
const int MAX = 2e5 + 7;

int res[MAX];

void solve()
{
    int n;
    cin >> n;
    cout << res[n] << '\n';
}

int S(int x)
{
    int res = 0;
    while (x)
    {
        res += (x % 10);
        x /= 10;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    res[0] = 0;
    for (int i = 1; i < MAX; i++)
    {
        res[i] = res[i - 1] + S(i);
    }

    int tc = 1;
    cin >> tc;

    while (tc--)
        solve();

    return 0;
}
