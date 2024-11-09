#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[4][2] = {{1,2},{3,4},{5,6},{7,8}};
    cout << arr[1][1] << endl;
    //
    cout << "---------------------------" << endl;
    //
    int m = 0,n = 0;//定义二维数组的长度
    cout << "输入二维数组的长度：" << endl;
    cin >> m >> n;
    int **Arr = new int *[m];//小数组的个数

    for(int i = 0; i < m; i++){
        Arr[i] = new int[n];
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> Arr[i][j];
        }
    }

    cout << "---------------------------" << endl;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << Arr[i][j] << " ";
        }
    }

    return 0;
}