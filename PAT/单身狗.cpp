// https://pintia.cn/problem-sets/994805260223102976/problems/994805266942377984
// 注意：erase()迭代器删除一定要慎用啊啊啊！！！
// 类似样例
// case 1:
// 3
// 11111 55555
// 22222 44444
// 33333 66666
// 6
// 11111 22222 33333 44444 55555 66666

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

string p[maxn];
set<string> se;

int main()
{
    // ios;
    int n;
    cin >> n;
    while (n--) {
        string a, b;
        cin >> a >> b;
        p[stoi(a)] = b;
        p[stoi(b)] = a;
    }
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        se.insert(s);
    }
    for (set<string>::iterator it = se.begin(); it != se.end();) {
        if (se.find(p[stoi(*it)]) != se.end()) {
            se.erase(se.find(p[stoi(*it)]));
            it = se.erase(it);
            if (it == se.end()) break;
        }
        else
            it++;
    }
    cout << se.size() << '\n';
    for (auto i : se) {
        if (i != *se.begin()) cout << ' ';
        cout << i;
    }
    return 0;
}