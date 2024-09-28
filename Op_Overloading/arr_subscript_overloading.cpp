
// '[]' Array Subscript Operator 
// used to check Out of bound cases
// the operator can't be friend function and Non-Static function => '[]', '()', '->', '='

#include<iostream>
using namespace std;

class Point{
    int arr[2];     // 0->x, 1->y
public :
    Point(int x=0, int y=0){           // {x, y}
        arr[0] = x;             // 3
        arr[1] = y;             // 4
    }

    // retrun int reference will not change original object value
    int& operator [] (int index){    // index - array position
        if(index == 0)
            return arr[0];
        else if(index == 1)
            return arr[1];
        else{
            cout<<"Out Of Bound case."<<endl;
            exit(0);
        }     
    }

    void print(){
        cout<<"X : "<<arr[0]<<"  Y : "<<arr[1]<<endl;
    }

};
int main(){
    Point P1(3,4);
    P1.print();         // X : 3  Y : 4
    P1[0] = 6;          // passing 0 as index
    P1[1] = 5;
    P1.print();         // X : 6  Y : 5
    P1[3] = 9;          // Out Of Bound case. Array has only 2 element x & y
    P1.print();
    return 0;
}