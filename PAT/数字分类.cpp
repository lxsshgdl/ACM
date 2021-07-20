// https://pintia.cn/problem-sets/994805260223102976/problems/994805311146147840
// 错误：if (a2)
//         cout << a2 << ' ';
//     else
//         cout << 'N' << ' ';
// 改正：if (j)
//         cout << a2 << ' ';
//     else
//         cout << 'N' << ' ';
// 原因：a2可能为0,不能以a2作为判断依据


#include <bits/stdc++.h>
#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(0);

using namespace std;

const int maxn = 1e3 + 5;
const int inf = 0x3f3f3f3f;
const int mod = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios;
    int n, a1 = 0, a2 = 0, a5 = 0, num, f = 1;
    cin >> n;
    bool j = 0;
    int c1 = 0, c2 = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (!(num % 5) && !(num & 1)) a1 += num;
        if (num % 5 == 1) {
            j = 1;
            a2 = a2 + f * num;
            f *= -1;
        }
        if (num % 5 == 2) c1++;
        if (num % 5 == 3) {
            c2++;
            sum += num;
        }
        if (num % 5 == 4) {
            if (num > a5) a5 = num;
        }
    }
    if (a1)
        cout << a1 << ' ';
    else
        cout << 'N' << ' ';
    if (j)
        cout << a2 << ' ';
    else
        cout << 'N' << ' ';
    if (c1)
        cout << c1 << ' ';
    else
        cout << 'N' << ' ';
    if (c2)
        cout << fixed << setprecision(1) << sum * 1.0 / c2 << ' ';
    else
        cout << 'N' << ' ';
    if (a5)
        cout << a5;
    else
        cout << 'N';
    return 0;
}