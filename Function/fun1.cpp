#include<iostream>
using namespace std;

void printMinium(int arr[5]);

int max(int a, int b){
    if(a>b)
        return a;
    else 
        return b;
}

void printMinium(int arr[5]){
    int min = arr[0];

    for(int i=0; i<5; i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<"Minimum element : "<<min<<endl;
}

void passByValue(int a){
    a = 30;
}
void passByReference(int* b){
    *b = 20;
}

int main(){
    int x=7, y=9;
    int maxNumber = max(x,y);
    cout<< "max number : "<<maxNumber<<endl;

    passByValue(x);
    cout<<"value of X : "<<x<<endl;     // 7

    passByReference(&y);
    cout<<"value of Y : "<<y<<endl;     // 20

    int array[] = {30, 20, 10, 40, 50};
    printMinium(array);

    return 0;
}

/*
int main(int argc, char* const argv[]){
    
     int x=7, y=9;
    int maxNumber = max(x,y);
    cout<< "max number : "<<maxNumber<<endl;

    passByValue(x);
    cout<<"value of X : "<<x<<endl;     // 7

    passByReference(&y);
    cout<<"value of Y : "<<y<<endl;     // 20

    return 0;
}
*/