#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {3, 2, 1, 4, 3, 2, 5, 6, 1};

    // 使用 unordered_set 去重
    unordered_set<int> unique_set1(vec.begin(), vec.end());
    // 将去重后的结果存储回 set 进行从小到大排序
    set<int> unique_set2(unique_set1.begin(),unique_set1.end());
    // 将去重后的结果存储回 vector
    vector<int> unique_vec(unique_set2.begin(), unique_set2.end());

    // 打印去重后的结果
    cout << "去重后从小到大排序："<< endl;
    for (int i : unique_vec) {
        cout << i << " ";
    }
    cout << endl;
    //将去重后的结果存储回 set 进行从大到小排序
    set<int, greater<int>> unique_set3(vec.begin(), vec.end());
    cout << "去重后从大到小排序："<< endl;
    for (int i : unique_set3) {
        cout << i << " ";
    }
    return 0;
}