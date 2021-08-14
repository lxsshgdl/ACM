// https://pintia.cn/problem-sets/994805260223102976/problems/994805261493977088
// 新知识点：对map中的key-value进行排序可以将map复制到vector中进行自定义排序
// 注意：一定要注意map[key]自动生成map[key]=XXX到map中

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

map<string, double> mp, mm, mn;
map<string, double> mz;

bool cmp(const pair<string, double>& a, const pair<string, double>& b)
{
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main()
{
    // ios;
    int p, m, n;
    cin >> p >> m >> n;
    string s;
    int num;
    while (p--) {
        cin >> s >> num;
        mp[s] = num;
    }
    while (m--) {
        cin >> s >> num;
        mm[s] = num;
    }
    while (n--) {
        cin >> s >> num;
        mn[s] = num;
        if (mm.find(s) != mm.end() && mm[s] > num)
            mz[s] = round(mm[s] * 0.4 + num * 0.6);
        else
            mz[s] = num;
    }
    vector<pair<string, double>> v(mz.begin(), mz.end());
    sort(v.begin(), v.end(), cmp);
    for (auto i : v) {
        if (mp[i.first] >= 200 && mz[i.first] >= 60)
            cout << i.first << ' ' << mp[i.first] << ' '
                 << (mm.find(i.first) != mm.end() ? mm[i.first] : -1) << ' '
                 << (mn.find(i.first) != mn.end() ? mn[i.first] : -1) << ' '
                 << mz[i.first] << '\n';
    }
    return 0;
}