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
const int MAX_N = 1000;

pii arr[MAX_N];

void solve()
{
    int st, n;
    cin >> st >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i].f >> arr[i].s;

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (st <= arr[i].f)
        {
            cout << "NO\n";
            return;
        }
        else
            st += arr[i].s;
    }

    cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    // cin >> tc;

    while (tc--)
        solve();

    return 0;
}
