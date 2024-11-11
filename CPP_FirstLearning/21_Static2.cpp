#include <bits/stdc++.h>
using namespace std;

void AF(int arr[],int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void a(){
    cout << "Hello " ;
}

void b(){
    a();
    cout << "World!";
}

int main(){
    int arr[] = {1,2,3,4,5};
    AF(arr,5);

    //
    cout << "---------------------------" << endl;
    // 

    b();

    return 0;
}