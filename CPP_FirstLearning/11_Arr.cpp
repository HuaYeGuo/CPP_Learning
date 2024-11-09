#include <bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
    return a > b;
}

int main(){
    //数组的遍历
    int arr[5] = {1,2,3,4,5};
    for(int i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }
    //
    cout << "---------------------------" << endl;
    //
    int n = 0;
    cout << "请输入输入数组个数：";
    cin >> n;
    int *ARR = new int[n];
    cout << "输入数组内容：";
    for(int i = 0; i < n; i++){
        cin >> ARR[i];   
    }
    cout << "数组从小到大排列：";

    sort(ARR, ARR+n);//排序算法，从小到大
    for (int i = 0; i < n; i++){
        cout << ARR[i] << " ";
    }
    cout << endl;
    cout << "数组从大到小排列：";

    sort(ARR,ARR+n,cmp);//从大到小
    for (int i = 0; i < n; i++){
        cout << ARR[i] << " ";
    }

    return 0;
}