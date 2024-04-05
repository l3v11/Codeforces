#include <bits/stdc++.h>
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
using vb = vector<bool>;

#define sz(x) int((x).size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define eb emplace_back

const int mod = 1e9 + 7; // 998244353;

#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    vi arr(3);
    int n;
    cin >> arr[0] >> arr[1] >> arr[2] >> n;

    int sum = accumulate(arr.begin(), arr.end(), 0) + n;

    if (sum % 3 or *max_element(all(arr)) * 3 > sum) no;
    else yes;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc = 1;
    cin >> tc;

    while (tc--)
        solve();
}
