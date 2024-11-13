#include <bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;//排序的set集合
    unordered_set<int> s1 = {3,2,1,4};//不排序的set集合
    s.insert(3);//插入set集合
    s.insert(1);
    s.insert(2);
    s.insert(4);

    cout << "排序的set集合：" << endl;
    for(int i : s){
        cout << i << " ";
    }
    cout << endl;

    cout << "不排序的set集合：" << endl;
    for(int i : s1){
        cout << i << " ";
    }
    cout << endl;

    int len = s.size();
    cout << "set集合长度为：" << len << endl;

    bool jdg = s.empty();
    if(jdg == 0) cout << "该集合为不为空" << endl;
    if(jdg == 1) cout << "该集合为空" << endl;

    s.erase(2);//删除第二个元素
    cout << "删除后的集合遍历：" << endl;

    for(int i : s){
        cout << i << endl;
    }

    //
    cout << "---------------------------" << endl;
    //

    
    map<string,int> m;
    m["aka"] = 50;
    cout << m["aka"] << endl;

    map<string,int> m1;
    m1.insert(make_pair("aka",20));//插入一个键值对
    cout << m1["aka"] << endl;

    return 0;
}