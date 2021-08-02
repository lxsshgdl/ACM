// https://pintia.cn/problem-sets/994805260223102976/problems/994805291311284224
// 知识点：upper_bound

#include <bits/stdc++.h>
#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(0);
using namespace std;

const int maxn = 1e5 + 5;
const int inf = 0x3f3f3f3f;
const int mod = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;

ull a[maxn], b[maxn];

int main()
{
    ios;
    int maxx = 0;
    int n, p;
    cin >> n >> p;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    for (int i = 0; i < n; i++) {
        b[i] *= p;
        if (upper_bound(a, a + n, b[i]) - a - i > maxx)
            maxx = upper_bound(a, a + n, b[i]) - a - i;
    }
    cout << maxx << '\n';
    return 0;
}