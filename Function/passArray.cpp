#include<iostream>
using namespace std;

void fun(int array[], int n){       // type 1

    for(int i=0; i<n; i++){
        cout<<"  "<<array[i];
    }

}
void fun_1(int *array, int n){      // type 2

    for(int i=0; i<n; i++){
        cout<<"  "<<array[i];
    }

}
int main(){
    int arr[] = {3, 4, 6 , 7};
    int size = sizeof(arr)/sizeof(arr[0]);
    fun(arr, size);
    cout<<endl;
    fun_1(arr, size);
    return 0;
}