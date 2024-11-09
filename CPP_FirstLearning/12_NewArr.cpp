#include <bits/stdc++.h>
using namespace std;

int main(){
    //动态规划求斐波那契数列
    int arr[100];
    arr[1] = 1; arr[2] = 1;
    for(int i = 3;i <= 10;i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    cout << arr[4];
    
    return 0;
}