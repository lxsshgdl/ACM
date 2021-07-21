// https://pintia.cn/problem-sets/994805260223102976/problems/994805285812551680
// 新知识点：c++ stl中的
// 四舍五入函数round()
// 向下取整floor()
// 向上取整ceil()

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
    double n;
    char ss;
    cin >> n >> ss;
    string s(n, ss), f(n - 2, ' ');
    for (int i = 1; i <= round(n / 2); i++) {
        if (i == 1 || i == round(n / 2))
            cout << s << '\n';
        else
            cout << ss << f << ss << '\n';
    }
    return 0;
}