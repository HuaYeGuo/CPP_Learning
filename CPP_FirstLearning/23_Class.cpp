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
};

int main(){
    Person *p = new Person();//指针变量

    p->name = "xiaoming";
    p->eat();

    return 0;
}