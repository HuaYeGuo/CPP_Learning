#include <bits/stdc++.h>
using namespace std;

int main(){
    char arr[] = {'a','b','c','\0'};//'\0'结束标识符
    char str[] = "Hello World!";//默认在末尾加'\0'
    char brr[4] = "abc";//末尾加了'\0'，长度为4

    cout << arr << endl;
    cout << str << endl;
    cout << brr << endl;

    //
    cout << "---------------------------" << endl;
    //

    char Str[1024];
    cout << "随便输入一个字符串：" << endl;
    cin.getline(Str,1024);//字符输入（c++语法）
    //fgets(Str,1024,stdin);//(c语法),《？stdin就是读取的输入文件 ？》
    cout << "完整的输入字符串为：" << endl;
    cout << Str << endl;
    cout << "从字符串第三位输入字符串为：" << endl;
    cout << Str + 2 << endl;//指针移动？

    return 0;
}