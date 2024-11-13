#include <bits/stdc++.h>
using namespace std;

class Person{
public:
    int age;
};
int main(){
    int *arr = new int[114514];
    delete[] arr;
    Person *p = new Person;
    (*p).age = 10;

    return 0;
}