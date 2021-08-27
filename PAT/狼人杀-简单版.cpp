// https://pintia.cn/problem-sets/994805260223102976/problems/1038429385296453632
// 题解：两个狼人，一个必说谎，另一个必没有说谎
// 枚举狼人i,j,依次查找说谎的人，最后进行判断

#include <bits/stdc++.h>
#define ios                      \
    ios::sync_with_stdio(false); \
    cin.tie(0);

using namespace std;

const int maxn = 1e2 + 5;
const int inf = 0x3f3f3f3f;
const int mod = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios;
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) cin >> v[i];
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            vector<int> lie;
            for (int k = 1; k <= n; k++)
                if (v[k] * (abs(v[k]) == i || abs(v[k]) == j ? -1 : 1) < 0)
                    lie.push_back(k);
            if (lie.size() == 2 && !((lie[0] == i || lie[0] == j ? -1 : 1) +
                                     (lie[1] == i || lie[1] == j ? -1 : 1))) {
                cout << i << ' ' << j << '\n';
                return 0;
            }
        }
    }
    cout << "No Solution\n";
    return 0;
}