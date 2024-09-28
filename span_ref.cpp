#include <iostream> 
#include <span> 
using namespace std; 
  
int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 5 }; 
  
    // Create a span of int of array 
    span<int> span_arr(arr); 
  
    for (const auto& num : span_arr) { 
        cout << num << " "; 
    } 
    return 0; 
}