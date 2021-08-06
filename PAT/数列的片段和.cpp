// https://pintia.cn/problem-sets/994805260223102976/problems/994805275792359424
// 知识点：double、long double精度问题
// 错因：数据在s = s + n - 2 * i;计算过程中会爆（例如当i=10^5/2时）


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

int main()
{
    ios;
    int n;
    cin >> n;
    long double sum = 0, num;
    ll s = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        s = s + n - 2 * i;
        sum += num * s;
    }
    cout << fixed << setprecision(2) << sum << '\n';
    return 0;
}