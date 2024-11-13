#include <bits/stdc++.h>
using namespace std;

int main() {
    // 使用 make_pair 创建 pair
    pair<int, string> p1 = make_pair(10, "apple");

    // 直接使用构造函数创建 pair
    pair<int, double> p2(20, 3.14);

    // 输出 pairs
    cout << "p1: " << p1.first << ", " << p1.second << endl;
    cout << "p2: " << p2.first << ", " << p2.second << endl;

    pair<int, int> p3(10, 20);
    pair<int, int> p4(10, 30);

    if (p3 == p4) cout << "p3 and p4 are equal" << endl;
    if (p3 < p4) cout << "p3 is less than p4" << endl;
    
    //
    cout << "---------------------------" << endl;
    //

    // 创建一个空的 stack
    stack<int> s;

    // 向 stack 中添加元素
    s.push(10); // 压栈
    s.push(20);
    s.push(30);

    // 输出栈顶元素
    cout << "栈顶元素: " << s.top() << endl; // 输出 30

    // 移除栈顶元素
    s.pop();
    cout << "移除栈顶元素后此时栈顶为: " << s.top() << endl; // 输出 20

    // 检查 stack 是否为空
    if (!s.empty()) {
        cout << "Stack is not empty" << endl;
    } else {
        cout << "Stack is empty" << endl;
    }

    // 获取 stack 的大小
    cout << "Stack size is: " << s.size() << endl; // 输出 2

    //
    cout << "---------------------------" << endl;
    //

    // 创建一个空的 queue
    queue<int> q;

    // 向 queue 中添加元素
    q.push(10); // 入队
    q.push(20);
    q.push(30);

    // 输出队首元素
    cout << "输出队首元素: " << q.front() << endl; // 输出 10

    // 移除队首元素
    q.pop();
    cout << "移除队首元素再输出: " << q.front() << endl; // 输出 20

    // 检查 queue 是否为空
    if (!q.empty()) {
        cout << "Queue is not empty"<< endl;
    } else {
        cout << "Queue is empty" << endl;
    }

    // 获取 queue 的大小
    cout << "Queue size is: " << q.size() << endl; // 输出 2

    // 创建一个空的 priority_queue，默认为最大堆
    priority_queue<int> pq;

    // 向 priority_queue 中添加元素
    pq.push(10);
    pq.push(30);
    pq.push(20);

    // 输出队首元素（优先级最高的元素）
    cout << "输出队首元素（优先级最高的元素）: " << pq.top() << endl; // 输出 30

    //需求 每次 把数组中的两个数相加
    priority_queue<int> pq1;
    int arr[] = {6,5,3,4,1,2};
    for(int i = 0; i < 6; i++){
        pq1.push(arr[i]);
    }

    while (pq1.size() > 1){
        int a = pq1.top();pq1.pop();
        int b = pq1.top();pq1.pop();

        pq1.push(a + b);
    }
    cout << pq1.top() << endl;

    return 0;
}