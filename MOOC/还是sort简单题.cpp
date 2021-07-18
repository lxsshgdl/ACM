// http://cxsjsxmooc.openjudge.cn/2021t1summer2/060/
// 新知识点：声明比较类
// 更多sort自定义排序函数见
// https://blog.csdn.net/weixin_41588502/article/details/86620305

#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

struct Rule1 {
    bool operator()(const int &a, const int &b) {
        int x = a, y = b;
        if (x / 10)
            x %= 10;
        if (y / 10)
            y %= 10;
        if (x == y)
            return a > b;
        else
            return x < y;
    }
};

struct Rule2 {
    bool operator()(const Point &a, const Point &b) {
        if (sqrt(a.x * a.x + a.y * a.y) == sqrt(b.x * b.x + b.y * b.y)) {
            if (a.x == b.x)
                return a.y < b.y;
            else
                return a.x < b.x;
        } else
            return sqrt(a.x * a.x + a.y * a.y) < sqrt(b.x * b.x + b.y * b.y);
    }
};

int main() {
    int a[8] = {6, 5, 55, 23, 3, 9, 87, 10};
    sort(a, a + 8, Rule1());
    for (int i = 0; i < 8; ++i)
        cout << a[i] << ",";
    cout << endl;
    Point ps[8] = {{1, 0}, {0, 1}, {0, -1}, {-1, 0}, {1, -1}, {1, 1}, {2, 0}, {-2, 0}};
    sort(ps, ps + 8, Rule2());
    for (int i = 0; i < 8; ++i)
        cout << "(" << ps[i].x << "," << ps[i].y << ")";
    return 0;
}