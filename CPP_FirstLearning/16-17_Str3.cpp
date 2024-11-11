#include <bits/stdc++.h>
using namespace std;

int main(){
    string arr = "hello world!";

    string s(5,'a');

    string s1("three");

    string a = "Hello ";
    a += "World!";

    cout << arr << endl;
    cout << s << endl;
    cout << s1 << endl;
    cout << a << endl;

    //
    cout << "---------------------------" << endl;
    //
    
    string str;
    cout << "随便输入一段字符串：" << endl;
    getline(cin,str);//此方法可以接收空格
    // cin >> str;//此方法只能接收整字符串，不能接收空格
    cout << "输入一段字符串为：" <<  str << endl;
    int n1 = str.empty();//判断输入字符串是否为空
    if(n1 == 0) cout << "该字符串输入不为空" << endl;
    if(n1 == 1) cout << "该字符串输入为空" << endl;
    int n2 = str.length();
    cout << "输入的字符串长度为：" << n2 << endl;
    
    //
    cout << "---------------------------" << endl;
    //

    string str2 = "Hello World!";
    str2.replace(6,5,"C++");//从第6个字符开始，替换长度为5的子字符串为"C++"，输出结果："Hello C++!"
    cout << str2 << endl;

    //
    cout << "---------------------------" << endl;
    //

    string str3;
    cout << "输入一个字符串：" << endl;
    getline(cin,str3);//123456
    str3.erase(3,1);//从字符串的第三个字符开始，删除后面一个字符
    cout << str3 << endl;

    return 0;   
}