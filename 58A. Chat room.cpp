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

void solve()
{
    str s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < sz(s); i++)
    {
        if (s[i] == 'h' && cnt == 0)
            cnt++;
        else if (s[i] == 'e' && cnt == 1)
            cnt++;
        else if (s[i] == 'l' && cnt == 2)
            cnt++;
        else if (s[i] == 'l' && cnt == 3)
            cnt++;
        else if (s[i] == 'o' && cnt == 4)
            cnt++;
    }

    if (cnt == 5)
        cout << "YES\n";
    else
        cout << "NO\n";
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
