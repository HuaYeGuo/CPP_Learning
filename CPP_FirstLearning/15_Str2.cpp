#include <bits/stdc++.h>
using namespace std;

int main(){
    char str[1024];
    cout << "随便输入一个字符串：" << endl;
    cin.getline(str,1024);
    int len = strlen(str);//strlen(str),返回字符串长度，不接收'\0'
    cout << "str数组的长度为：" << len << endl;

    //
    cout << "---------------------------" << endl;
    //

    char a[] = "123";
    char b[] = "23";
    int n = strcmp(a,b);//字典排序比大小(ASCII表)
    if(n == 0) cout << "两个字符串相等" << endl;
    if(n == 1) cout << "字符串a比字符串b要大" << endl;
    if(n == -1) cout << "字符串b比字符串a要大" << endl;

    //
    cout << "---------------------------" << endl;
    //

    char c[] = "22323";
    char d[] = "45";
    strcpy(c,d);//字符串d内容覆盖（copy）字符串c内容
    cout << c << endl;

    //
    cout << "---------------------------" << endl;
    //

    char e[] = "Hello ";
    char f[] = "World";
    strcat(e,f);//字符串的拼接，具有扩容功能
    cout << e << endl;

    return 0;
}