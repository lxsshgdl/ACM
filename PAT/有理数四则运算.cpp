// https://pintia.cn/problem-sets/994805260223102976/problems/994805287624491008
// 错因：爆数
// 改正：用long long

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

void hj(ll a, ll b)
{
    if (!b) {
        cout << "Inf";
        return;
    }
    if (b < 0) {
        a *= -1;
        b *= -1;
    }
    if (a < 0) cout << '(';
    int gcd = abs(__gcd(a, b));
    a /= gcd;
    b /= gcd;
    if (b == 1)
        cout << a;
    else {
        bool j = 0;
        if (a / b) {
            j = 1;
            cout << a / b << ' ';
        }
        if (!j)
            cout << a % b << '/' << b;
        else
            cout << abs(a % b) << '/' << b;
    }
    if (a < 0) cout << ')';
}

int main()
{
    ios;
    ll a, b, c, d;
    char ch;
    cin>>a>>ch>>b>>c>>ch>>d;
    hj(a, b);
    cout << " + ";
    hj(c, d);
    cout << " = ";
    hj(a * d + b * c, b * d);
    cout << '\n';
    hj(a, b);
    cout << " - ";
    hj(c, d);
    cout << " = ";
    hj(a * d - b * c, b * d);
    cout << '\n';
    hj(a, b);
    cout << " * ";
    hj(c, d);
    cout << " = ";
    hj(a * c, b * d);
    cout << '\n';
    hj(a, b);
    cout << " / ";
    hj(c, d);
    cout << " = ";
    hj(a * d, b * c);
    cout << '\n';
    return 0;
}