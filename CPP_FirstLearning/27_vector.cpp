#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(1);//添加容器元素，会自动扩容
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    int len1 = v.size();//容器长度
    v.pop_back();//pop弹出容器最后一个元素
    int len2 = v.size();//容器长度
    for(int i : v){
        cout << i << endl;
    }
    cout << "未弹出时容器长度为：" << len1 << endl;
    cout << "弹出后容器长度为：" << len2 << endl;
    int beg = v.front();
    cout << "容器的首数据：" << beg << endl; 
    int ed = v.back();
    cout << "容器的尾部数据：" << ed << endl;
    v.clear();//清空容器数据
    cout <<"清空容器数据后容器长度为："<< v.size() << endl;

    //
    cout << "---------------------------" << endl;
    //

    vector<int> v2(10);//可以这样定义容器长度
    cout << "容器初始化大小为：" << v2.size() << endl;
    v2.resize(20);
    cout << "容器重新初始化后的大小为：" << v2.size() << endl;

    //
    cout << "---------------------------" << endl;
    //

    vector<int> v3;

    v3.push_back(1);
    v3.push_back(2);
    v3.push_back(3);
    v3.push_back(4);

    v3.insert(v3.begin() + 1, 5);//在容器第二个位置插一个5
    cout << "插入后的容器遍历：" << endl;

    for(int i : v3){
        cout << i << endl;
    }

    v3.erase(v3.begin(), v3.end()-2);//删除[数据)、左开右闭的数据。
    cout << "删除后的容器遍历：" << endl;

    for(int i : v3){
        cout << i << endl;
    }

    //
    cout << "---------------------------" << endl;
    //
    
    vector<int> v4 = {1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5};
    //1 2 3 4 5  /1 2 2 2 3 3 3 4 4 4 5
    v4.erase(unique(v4.begin(),v4.end()),v4.end());
    cout << "去重后的容器遍历：" << endl;

    for(int i : v4){
        cout << i << endl;
    }

    return 0;
}