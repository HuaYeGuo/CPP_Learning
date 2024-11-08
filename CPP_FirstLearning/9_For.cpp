#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    for (int i = 1; i <= 100; i++){
        sum += i;
    }
    cout << "1到100的和为：" << sum << endl;
    //
    cout << "---------------------------" << endl;
    //
    //求1-100中能被7整除的数
    cout << "1-100中能被7整除的数有：" << endl;
    for (int j = 1;j <= 100; j++){
        if(j % 7 == 0){
            cout << j << endl;
        }
    }
    //
    cout << "---------------------------" << endl;
    //
    //求1-10中不能被5整除的数
    cout << "1-10中不能被5整除的数有：" << endl;
    for (int k = 1; k <= 10; k++){ 
        if(k % 5 == 0){
            continue;
        }
        cout << k << " " ;
    }
    
}