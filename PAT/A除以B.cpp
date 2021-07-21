// https://pintia.cn/problem-sets/994805260223102976/problems/994805305181847552
// 新知识点：c++大数除法模拟

// python两行代码即可ac
// a,b=map(int,input().split())
// print(a//b,a%b)

// java大数超时。。。。。。 c/c++ --> yyds！！！
// import java.math.*;
// import java.util.Scanner;
// public class test {
//     public static void main(String[] args) {
//         Scanner input = new Scanner(System.in);
//         BigInteger a = input.nextBigInteger();
//         BigInteger b = input.nextBigInteger();
//         System.out.println(a.divide(b));
//         System.out.println(a.remainder(b));
//     }
// }

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
    // ios;
    string a, q, r, h;
    int b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        h += a[i];
        if (stoi(h) >= b) {
            q += to_string((stoi(h)) / b);
            r = to_string((stoi(h)) % b);
            h = r;
        }
        else {
            if (!q.empty()) q += '0';
        }
    }
    if (q.empty())
        cout << 0 << ' ' << a;
    else
        cout << q << ' ' << r << '\n';
    return 0;
}