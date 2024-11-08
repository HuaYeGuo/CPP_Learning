#include <bits/stdc++.h>
using namespace std;

int main(){
    bool flat = false;
    cout << flat << endl;
    
    double res1 = 1.14514e2;//科学计数法表示1.14514的10的2次方
    cout << res1 << endl;
    //
    cout << "---------------------------" << endl;
    //
    int num1;
    char word1;

    cout << "请输入一个数字和字符：" << endl;
    cin >> num1 >> word1; 
    cout << "输入的数字是：" << num1 << "输入的字符是：" << word1 << endl;
    //
    cout << "---------------------------" << endl; 
    //
    int num2 = 0;

    num2 += 5;//num2 = num2 + (右侧的表达式 )
    cout << num2 << endl;
    //
    cout << "---------------------------" << endl; 
    //
    int num3 = 1;

    num3++;
    ++num3;
    cout << (num3++ > 3) << endl;
    cout << num3 << endl;
    //
    cout << "---------------------------" << endl; 
    //
    cout << 5.0/2 << endl;//2.5
    cout << 5/2 << endl;//2
    //
    cout << "---------------------------" << endl; 
    //
    char wrd = 97;// "a" = 97 ;"A" = 65
    cout <<  wrd << endl;
    cout <<  char(wrd - 32) << endl;

    return 0;
}