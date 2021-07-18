// http://cxsjsxmooc.openjudge.cn/2021t1summer2/025/
// 错误：没考虑到七进制数各位数都小于7，最初得出155 281 182这一答案
// 改正：if中加入a < 7 && b < 7 && c < 7
// 原因：傻


#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(false), cin.tie(0);

using namespace std;

const int maxn = 1e5 + 5;
const int inf = 0x3f3f3f3f;
const int mod = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;

int main() {
    ios;
    for (int i = 100; i <= 999; i++) {
        int a = i / 100;
        int b = i % 100 / 10;
        int c = i % 100 % 10;
        if (a < 7 && b < 7 && c < 7 && pow(7, 0) * c + pow(7, 1) * b + pow(7, 2) * a == pow(9, 0) * a + pow(9, 1) * b + pow(9, 2) * c) {
            cout << pow(7, 0) * c + pow(7, 1) * b + pow(7, 2) * a << '\n';
            cout << a << b << c << '\n';
            cout << c << b << a << '\n';
        }
    }
    return 0;
}