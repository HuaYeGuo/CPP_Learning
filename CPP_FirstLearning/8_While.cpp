#include <bits/stdc++.h>
using namespace std;

int main(){
    int num = 1;
    while (num <= 5){
        cout << "循环了第：" << num << "次" << endl;
        num++;
    } 
    //
    cout << "---------------------------" << endl; 
    //
    //求1到100的和
    int num1 = 1;
    int sum = 0;
    while(num1 <= 100){
        sum += num1;
        num1++;
    }
    cout << sum << endl;
    //
    cout << "---------------------------" << endl; 
    //
    //斐波那契
    int m = 1,n = 1;
    int i = 0;
    int target = 3;
    int res = 0;
    
    cout << "输入你想知道的斐波那契数列中第几个数字：";
    cin >> i;
    if(i <= 2) cout << 1 << endl;
    while(target <= i){
        res = m + n;
        m = n;
        n = res;

        target++;
    }

    cout <<"第" << target - 1 << "个数字为:" << res << endl;
    //
    cout << "---------------------------" << endl; 
    //
    int num2 = 1;

    do{
        cout << "数值为：" << num2 << endl;
        num2++;
    } 
    while (num2 <= 10);
    
    return 0;
}