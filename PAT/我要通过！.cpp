// https://pintia.cn/problem-sets/994805260223102976/problems/994805323154440192
// 题解：有点偏数学，找规律
// 新知识点：正则表达式

#include <bits/stdc++.h>
#define ios ios::sync_with_stdio(false), cin.tie(0);

using namespace std;

const int maxn = 1e5 + 5;
const int inf = 0x3f3f3f3f;
const int mod = 1e9 + 7;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    // ios;
    string s;
    int n;
    cin >> n;
    while (n--) {
        cin >> s;
        if (regex_match(s, regex("A*PA+TA*"))) {
            int a = s.find('P');
            int b = 0;
            int c = s.size() - s.find('T') - 1;
            for (int i = a + 1; i < s.find('T'); i++)
                if (s[i] == 'A') b++;
            b--;
            if (c == a * (b + 1))
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
            continue;
        }
        else {
            cout << "NO" << '\n';
            continue;
        }
    }
    return 0;
}