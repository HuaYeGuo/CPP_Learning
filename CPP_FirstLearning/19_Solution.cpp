#include <bits/stdc++.h>
using namespace std;

void SWAP(int &a,int &b){
    int tmp = a;
    a = b;
    b = tmp;  
}

int main(){
    int a = 1;
    int b = 2;
    SWAP(a,b);
    cout << a << " " << b;

    return 0;
}

