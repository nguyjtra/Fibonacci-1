#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
void ans(ll n) {
    cout << 1 << endl;
    ll a = 0, b = 1, ans = 0;
    for (ll i = 1; i <= n - 1; i++) {
        ans = b + a;
        a = b;
        b = ans;
        cout << ans << endl;
    }
}
int main() {
    ll n;
    cin >> n;
    ans(n);
    return 0;
}