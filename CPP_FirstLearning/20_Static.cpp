#include <bits/stdc++.h>
using namespace std;

void add(){
    static int num = 0;//static会将变量生命周期变长，修饰过的变量只能存在一个
    num++;
    cout << num << endl;
}

int main(){
    add();
    add();

    return 0;
}