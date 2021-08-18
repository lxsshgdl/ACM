// https://pintia.cn/problem-sets/994805260223102976/problems/994805260583813120
// 新知识点：a+=b比a=a+b快！！！

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
    string s;
    int n;
    cin >> s >> n;
    if (n == 1)
        cout << s << '\n';
    else {
        n--;
        while (n--) {
            string ss;
            for (int i = 0; i < s.size();) {
                char t = s[i];
                int c = 1;
                while (s[++i] == t) c++;
                ss += t + to_string(c);
                // ss =ss+ t + to_string(c);
            }
            s = ss;
        }
        cout << s;
    }
    return 0;
}