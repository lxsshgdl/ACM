//#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#define IOS ios::sync_with_stdio(false);cin.tie(0);

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int inf = 0x3f3f3f3f;
const int INF = 0x7f7f7f7f;
const int MAXN = 105;

ll quickpow(ll a, ll b, int mod) {
	if (!b) return 1 % mod;
	ll ans = 1;
	while (b) {
		if (b & 1)
			ans = ans * a % mod;
		b >>= 1;
		a = a * a % mod;
	}
	return ans;
}

int main() {
	IOS;
	ll a, n;
	while (~scanf("%lld%lld", &n, &a)) {
		ll sum = 0;
		if (a & 1) {
			cout << 1 << endl;
			continue;
		}
		int m = 1 << n;
		for (int b = 2; b <= n; b += 2) {
			if (quickpow(a, b, m) == quickpow(b, a, m))
				sum++;
		}
		int x = ceil(double(n) / a);
		sum += (m >> x) - (n >> x);
		cout << sum << endl;
	}
	return 0;
}
