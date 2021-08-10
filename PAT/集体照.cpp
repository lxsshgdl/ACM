// https://pintia.cn/problem-sets/994805260223102976/problems/994805272021680128
// 知识点：每排其他人以中间人为轴，按身高非增序，先右后左交替入队站在中间人的两侧
// （例如5人身高为190、188、186、175、170，则队形为175、188、190、186、170。
// 这里假设你面对拍照者，所以你的左边是中间人的右边）；
// 可以先逆序输出奇数，再顺序输出偶数
// 题目是真扯淡！！mmp

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

vector<pair<string, int>> v;
vector<string> vs;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}

int main()
{
    ios;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        string s;
        int x;
        cin >> s >> x;
        v.push_back({s, x});
    }
    int m = floor(n / k);
    sort(v.begin(), v.end(), cmp);
    for (int i = m + n % m - 1; i >= 0; i--) {
        if (i & 1) vs.push_back(v[i].first);
    }
    for (int i = 0; i <= m + n % m - 1; i++) {
        if (!(i & 1)) vs.push_back(v[i].first);
    }
    for (int i = 0; i < vs.size(); i++) {
        if (i) cout << ' ';
        cout << vs[i];
    }
    cout << '\n';
    for (int j = 1; j < n / m; j++) {
        vs.clear();
        for (int i = n % m + (j + 1) * m - 1; i >= n % m + j * m; i--) {
            if ((i - n % m) % m & 1) vs.push_back(v[i].first);
        }
        for (int i = n % m + j * m; i <= n % m + (j + 1) * m - 1; i++) {
            if (!((i - n % m) % m & 1)) vs.push_back(v[i].first);
        }
        for (int i = 0; i < vs.size(); i++) {
            if (i) cout << ' ';
            cout << vs[i];
        }
        cout << '\n';
    }
    return 0;
}