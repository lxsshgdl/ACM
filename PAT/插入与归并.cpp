// https://pintia.cn/problem-sets/994805260223102976/problems/994805286714327040
// 知识点：插入排序、归并排序
// 插入排序：将第一个数当做有序数列，从第二个数开始插入
// 归并排序：先分后合
// 题解：利用sort模拟插入排序和归并排序（可笑啊哈哈哈）,一定要注意边界！！！



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

vector<int> a, b, c;
bool f = 0;

void insort(vector<int> v)
{
    for (int i = 2; i <= v.size(); i++) {
        sort(v.begin(), v.begin() + i);
        if (v == c) {
            f = 1;
            cout << "Insertion Sort" << '\n';
            sort(v.begin(), v.begin() + i + 1);
            for (int j = 0; j < v.size(); j++) {
                if (j) cout << ' ';
                cout << v[j];
            }
            return;
        }
    }
}

void mersort(vector<int> v)
{
    int s = 1;
    while (v != c) {
        s *= 2;
        for (int i = s; i - s <= v.size(); i += s) {
            sort(v.begin() + i - s,
                 (i <= v.size() ? v.begin() + i : v.begin() + v.size()));
        }
    }
    s *= 2;
    for (int i = s; i - s <= v.size(); i += s) {
        sort(v.begin() + i - s,
             (i <= v.size() ? v.begin() + i : v.begin() + v.size()));
    }
    cout << "Merge Sort" << '\n';
    for (int j = 0; j < v.size(); j++) {
        if (j) cout << ' ';
        cout << v[j];
    }
    return;
}

int main()
{
    ios;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        a.push_back(num);
        b.push_back(num);
    }
    for (int i = 0; i < n; i++) {
        cin >> num;
        c.push_back(num);
    }
    insort(a);
    if (!f) mersort(b);
    return 0;
}