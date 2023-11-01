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

void solve() {
    vector<vc> ch(8, vc(8));

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            cin >> ch[i][j];

    int cnt_r = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (ch[i][j] == 'R') cnt_r++;
        }

        if (cnt_r == 8) break;
        else cnt_r = 0;
    }

    if(cnt_r == 8) cout << 'R' << '\n';
    else cout << 'B' << '\n';
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--) solve();

    return 0;
}