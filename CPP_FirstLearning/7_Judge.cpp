#include <bits/stdc++.h>
using namespace std;

int main(){
    bool flag = 6 > 5;

    if(flag){
        cout << "条件成立" << endl;
    }
    //
    cout << "---------------------------" << endl; 
    //
    int year = 0;
    cout << "请输入一个年份：";
    cin >> year;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) cout << "该年为闰年" << endl;
    else cout << "该年为平年" << endl;

    return 0;
}