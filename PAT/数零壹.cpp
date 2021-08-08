// https://pintia.cn/problem-sets/994805260223102976/problems/994805270914383872
// 新知识点：bitset(相当于二进制数组)

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

int a[2];

int main()
{
    // ios;
    string s;
    getline(cin, s);
    int sum = 0;
    for (auto i : s) {
        if (isupper(i))
            sum += i - 'A' + 1;
        else if (islower(i))
            sum += i - 'a' + 1;
    }
    if (sum) {
        bitset<60> bit(sum);
        int b = bit.count();
        int j, c = 0;
        for (int i = 0; i < 60; i++) {
            if (bit[i]) c++;
            if (c == b) {
                j = i;
                break;
            }
        }
        cout << j + 1 - b << ' ' << b << '\n';
    }
    else
        cout << "0 0" << '\n';
    return 0;
}