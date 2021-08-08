// https://pintia.cn/problem-sets/994805260223102976/problems/994805273883951104
// 注意：用户选择有负数，cin空格会卡你。中文字符烦死人，转义字符要注意。
// vscode标准和pta上不一样，有些字符vscode不能读入 呜呜

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

vector<string> e, m, h;
void getbq(string s, vector<string>& v)
{
    for (int i = 0; i < s.size();) {
        if (s[i++] == '[') {
            string ss;
            while (s[i] != ']') ss += s[i++];
            i++;
            v.push_back(ss);
        }
    }
}

int main()
{
    // ios;
    string s;
    getline(cin, s);
    getbq(s, h);
    getline(cin, s);
    getbq(s, e);
    getline(cin, s);
    getbq(s, m);
    int n;
    cin >> n;
    while (n--) {
        int a[5];
        string str;
        for (int i = 0; i < 5; i++) cin >> a[i];
        bool f = 0;
        for (int i = 0; i < 5; i++) {
            if (a[i] < 1) {
                f = 1;
                break;
            }
            if (i == 0) {
                if (a[i] <= h.size())
                    str = str + h[a[i] - 1] + '(';
                else {
                    f = 1;
                    break;
                }
            }
            else if (i == 1 || i == 3) {
                if (a[i] <= e.size())
                    str += e[a[i] - 1];
                else {
                    f = 1;
                    break;
                }
            }
            else if (i == 2) {
                if (a[i] <= m.size())
                    str += m[a[i] - 1];
                else {
                    f = 1;
                    break;
                }
            }
            else if (i == 4) {
                if (a[i] <= h.size())
                    str = str + ')' + h[a[i] - 1];
                else {
                    f = 1;
                    break;
                }
            }
        }
        if (!f)
            cout << str << '\n';
        else
            cout << "Are you kidding me? @\\/@" << '\n';
    }
    return 0;
}