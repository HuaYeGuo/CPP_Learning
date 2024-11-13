#include <bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
    return a > b;
}

int main(){
    vector<int> vec = {32,12,4,7,34,10,9,3};
    sort(vec.begin(),vec.end());
    cout << "从小到大排序：" << endl;
    for(int i : vec){
        cout << i << " ";
    }
    cout << endl;

    sort(vec.begin(),vec.end(),cmp);
     cout << "从大到小排序：" << endl;
    for(int i : vec){
        cout << i << " ";
    }
    cout << endl;

    //
    cout << "---------------------------" << endl;
    //

    int res = __gcd(10,15);//求10和15的最大公因数
    int res1 = 10 * 15 / res;
    cout << "10和15的最大公因数为：" << res << endl;
    cout << "10和15的最大公倍数为：" << res1 << endl;

    //
    cout << "---------------------------" << endl;
    //

    int crr[] = {4,3,5,2,1};
    reverse(crr,crr + 5);//反转数组
    for(int i : crr){
        cout << i << " ";
    }
    cout << endl;

    //
    cout << "---------------------------" << endl;
    //

    vector<int> drr = {1,2,3};
    //全排列
    do{
        for(int i : drr){
            cout << i << " ";
        }
        cout << endl;
    }while (next_permutation(drr.begin(),drr.end()));
    
    return 0;
}