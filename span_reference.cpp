#include<iostream>
#include<array>
#include<vector>
#include<span>
using namespace std;

// std::span <type> span_name;
// can update container but can't change th size of Container(array, vector etc.)
// eg : 
// std::span<char> span_name(string_name);


void print_content(span<int> container){
    for(const auto &e : container){
        cout<<e<<"  "<<endl;
    }
}
void modify_content(std::span<int> container){
    for(auto &e : container){
        e *= 2;
    }
}

int main(){
    int arr[] = {23, 45, 67, 78};
    
    print_content(arr);

    std::vector v{1, 2, 3, 4, 5};
    print_content(v);
    
    std::array arr2{-14, 55, 24, 67};
    print_content(arr2);

    return 0;
}