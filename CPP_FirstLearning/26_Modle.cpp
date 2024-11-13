#include <iostream>

using namespace std;

template<class T> // 声明一个通用的类型 T
bool maxA(T a, T b) {
    return a > b;
}

int main() {
    // 由于不能在函数内部声明模板类型变量，我们将根据用户输入来读取相应类型的变量
    int typeChoice;
    cout << "请输入变量类型（1: int, 2: double, 3: double）: ";
    cin >> typeChoice;

    if (typeChoice == 1) {
        int a, b;
        cin >> a >> b;
        if (maxA(a, b)) cout << "a 比 b 大" << endl;
        else cout << "a 比 b 小" << endl;
    } else if (typeChoice == 2) {
        double a, b;
        cin >> a >> b;
        if (maxA(a, b)) cout << "a 比 b 大" << endl;
        else cout << "a 比 b 小" << endl;
    } else if (typeChoice == 3) {
        float a, b;
        cin >> a >> b;
        if (maxA(a, b)) cout << "a 比 b 大" << endl;
        else cout << "a 比 b 小" << endl;
    } else {
        cout << "无效的类型选择" << endl;
    }

    return 0;
}