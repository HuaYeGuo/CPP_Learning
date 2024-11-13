#include <bits/stdc++.h>
using namespace std;

class Person{
private:
    string smallName;
    int age;
    char gender;
public:
    string name;
    void eat(){
        cout << "吃东西" << endl;
    }
    //封装
    void setsmallName(string name){
        this->smallName = name;
    }
    string getsmallName(){
        return this->smallName;
    }
};
//命名空间
namespace mySpace{
    int a;
    int b;
}


int main(){

    mySpace::a = 10;
    mySpace::b = 20;
    cout << mySpace::a + mySpace::b << endl;

    Person *p = new Person();//指针变量

    p->name = "xiaoming";
    p->eat();

    Person p1;
    p1.name = "以变量方式直接声明，直接实例化的对象";
    cout << p1.name << endl;
    
    p->setsmallName("小明");
    cout << p->getsmallName() << endl;
    
    return 0;
}