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

bool is_palindrome(string s)
{
    string p = s;
    reverse(all(p));

    if (s == p)
        return true;
    else
        return false;
}

void solve()
{
    str s;
    cin >> s;

    if (!is_palindrome(s + 'a'))
    {
        cout << "YES\n";
        cout << s + 'a' << '\n';
    }
    else if (!is_palindrome('a' + s))
    {
        cout << "YES\n";
        cout << 'a' + s << '\n';
    }
    else
        cout << "NO\n";
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
