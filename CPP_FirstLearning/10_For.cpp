#include <bits/stdc++.h>
using namespace std;

//判断素数
bool isPrime(int n){
        for(int L = 2;L < n;L++){
            if(n % L == 0){
                return false;
            }
        }
        return true;       
    }

int main(){
    //九九乘法表
    for(int i = 1;i <= 9;i++){
        for(int j = 1;j <= i;j++){
            cout <<j << "x" << i << "=" << i*j << "  ";
        }
        cout << endl;
    }
    //
    cout << "---------------------------" << endl;
    //
    //1到20所有素数的和
    int sum = 0;
    
    for(int P = 2;P <= 20;P++){
        if(isPrime(P) == true){
            sum += P;
        }
    }
    cout << sum << endl;

    return 0;
}