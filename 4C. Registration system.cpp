#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    map<string, int> db;
    string s;

    while (tc--) {
        cin >> s;
        
        if (db.count(s) == 0) {
            cout << "OK" << "\n";
            db[s] = 1;
        } else {
            cout << s << db[s] << "\n";
            db[s]++;
        }
    }

    return 0;
}