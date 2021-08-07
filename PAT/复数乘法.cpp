// https://pintia.cn/problem-sets/994805260223102976/problems/994805274496319488
// 错因：A、B的输出控制 (极限啊我丢)
// 还包含了点数学中的三角函数公式：
// cos(A+B) = cosAcosB-sinAsinB

// sin(A+B) = sinAcosB+cosAsinB


#include <bits/stdc++.h>
#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(0);

using namespace std;

const int maxn = 1e4 + 5;
const int inf = 0x3f3f3f3f;
const int mod = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios;
    long double r1, r2, p1, p2;
    cin >> r1 >> p1 >> r2 >> p2;
    if (r1 * r2 * (cos(p1) * cos(p2) - sin(p1) * sin(p2)) > -0.01 &&
        r1 * r2 * (cos(p1) * cos(p2) - sin(p1) * sin(p2)) < 0)
        cout << "0.00";
    else
        cout << fixed << setprecision(2)
             << r1 * r2 * (cos(p1) * cos(p2) - sin(p1) * sin(p2));

    if (r1 * r2 * (cos(p1) * sin(p2) + cos(p2) * sin(p1)) > -0.01 &&
        r1 * r2 * (cos(p1) * sin(p2) + cos(p2) * sin(p1)) < 0)
        cout << "+0.00";
    else if (r1 * r2 * (cos(p1) * sin(p2) + cos(p2) * sin(p1)) >= 0)
        cout << fixed << setprecision(2) << '+'
             << r1 * r2 * (cos(p1) * sin(p2) + cos(p2) * sin(p1));
    else
        cout << fixed << setprecision(2)
             << r1 * r2 * (cos(p1) * sin(p2) + cos(p2) * sin(p1));
    cout << 'i' << '\n';
    return 0;
}