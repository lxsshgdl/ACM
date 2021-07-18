// http://cxsjsxmooc.openjudge.cn/2021t1summer2/solution/29301099/
// 错误：int a[maxn]放在main函数内，声明为局部变量
// 改正：放在main函数外，声明为全局变量
// 原因：声明为全局变量会给a[maxn]数组赋值为0


#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(false), cin.tie(0);

using namespace std;

const int maxn = 1e4 + 5;
const int inf = 0x3f3f3f3f;
const int mod = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;

int a[maxn];

int main() {
    ios;
    int l, m;
    cin >> l >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        for (int i = x; i <= y; i++)
            a[i] = 1;
    }
    int count = 0;
    for (int i = 0; i <= l; i++)
        if (!a[i])
            count++;
    cout << count << '\n';
    return 0;
}