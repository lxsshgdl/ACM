// https://pintia.cn/problem-sets/994805260223102976/problems/994805313708867584
// 什么神仙题目啊啊，多项式居然还有0x^b，呵呵，这题意哭辽。。

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
    int k, b;
    bool j = 0;
    while (cin >> k >> b) {
        if (!k)
            cout << 0 << ' ' << 0;
        else if (!b) {
            if (j)
                continue;
            else
                cout << "0 0";
        }
        else {
            if (j) {
                cout << ' ';
            }
            cout << k * b << ' ' << b - 1;
        }
        j = 1;
    }
    return 0;
}