#include<iostream>
using namespace std;

const int r = 3, c = 2;

void fun_1(int array[r][c]){

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"  "<<array[i][j];
        }
        cout<<endl;
    }

}

void fun_2(int array[][c]){

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"  "<<array[i][j];
        }
        cout<<endl;
    }
}

void fun_3(int *array, int r, int c){

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<"  "<<*(array+i*c+j);
        }
        cout<<endl;
    }
}

int main(){
    int arr[r][c] = {{1,2},{3,4},{5,6}};
    fun_1(arr);
    fun_2(arr);
    fun_3((int *)arr, 3, 2);
    return 0;
}
