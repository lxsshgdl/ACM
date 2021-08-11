// https://pintia.cn/problem-sets/994805260223102976/problems/994805269312159744
// 题解：将每天骑车的距离非升序排列，if (a[i] > i && i > maxx) maxx = i，这行代码是灵魂！！！

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

int a[maxn];
int n;

int main()
{
    ios;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1, greater<int>());
    int maxx = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] > i && i > maxx) maxx = i;
    }
    cout << maxx << '\n';
    return 0;
}