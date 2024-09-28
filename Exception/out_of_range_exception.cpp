
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(9);

    try{    
        cout<<v.at(3)<<endl;        // 1
        cout<<"No Error"<<endl;
    }

    // catch(std::out_of_range){
    //     cout<<"It is catched out_of_range"<<endl;       // 2
    // }

    catch(const std::out_of_range& e){    // catch all types of exception
        cout<<e.what()<<endl;             // vector::_M_range_check: __n (which is 3) >= this->size() (which is 1)
    }

    // catch(...){     // catch all types of exception
    //     cout<<"It's all types of exceptions..."<<endl;       
    // }

    cout<<"Out of try and catch"<<endl;

    return 0;
}