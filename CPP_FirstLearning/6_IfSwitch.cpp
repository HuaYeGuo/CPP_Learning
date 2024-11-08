#include <bits/stdc++.h>
using namespace std;

int main(){
    int sco = 0;
    cout << "请输入你的成绩：" ;
    cin >> sco;
    cout << "你的成绩评定为：";
    if(sco < 60) cout << "不及格" << endl;    
    else if(sco >= 60 && sco < 75) cout << "一般" << endl;
    else if(sco >=75 && sco < 85) cout << "良好" << endl;
    else if(sco >= 85 && sco <= 100) cout << "优秀" << endl;
    else cout << "成绩输入有误！" << endl;
    //
    cout << "---------------------------" << endl; 
    //
    int num1 = 0,num2 = 0;
    char c;
    int res;
    cout << "四则整形运算计算器：" ;
    cin >> num1 >> c >> num2;

    switch (c){
    case '+':
        res= num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        res = num1 / num2;
        break;
    default:
        cout << "输入有误，不属于四则运算。" << endl;
        break;
    }
    cout << "计算结果为：" << res << endl;

    return 0;
}