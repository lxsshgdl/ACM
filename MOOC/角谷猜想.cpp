// http://cxsjsxmooc.openjudge.cn/2021t1summer2/022/
// 错误：int n;
// 改正：ull n;
// 原因：计算的过程中数会爆int


#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(false), cin.tie(0);

using namespace std;

const int maxn = 1e3 + 5;
const int inf = 0x3f3f3f3f;
const int mod = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;

int main() {
  ios;
  ull n;
  cin >> n;
  while (n != 1) {
    if (n & 1) {
      cout << n << "*3+1=" << n * 3 + 1 << '\n';
      n = n * 3 + 1;
    } else {
      cout << n << "/2=" << n / 2 << '\n';
      n /= 2;
    }
  }
  cout << "End" << '\n';
  return 0;
}