#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "hello 123 4.5 T";
   

    string s;
    int a;
    double b;
    char c;
    istringstream is(str);//给字符串创建一个输入流

    is >> s >> a >> b >> c;

    cout << s << " " << a << " " << b << " " << c << endl;

    ostringstream os;
    os << s << " world! " << a << "456 " << b << " " << c;
    cout << os.str() << endl;

    //
    cout << "---------------------------" << endl;
    //

    int arr[] = {1,2,3,4,5};
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}