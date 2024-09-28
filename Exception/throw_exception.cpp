
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(7);

    try{
        // throw 1;
        // throw 1.1;
        // throw 1.1f;
        // throw 'c';
        // throw "It's Exception";
        throw std::string("Exception");
    }
    catch(const int& e){
        cout<<"Int Exception..."<<e<<endl;              // Int Exception...1
    }
    catch(const double& e){
        cout<<"double Exception..."<<e<<endl;           // double Exception...1.1
    }
    catch(const float& e){
        cout<<"float Exception..."<<e<<endl;            // float Exception...1.1
    }
    catch(const char &e){
        cout<<"char Exception..."<<e<<endl;             // char Exception...c
    }
    catch(const char* & e){
        cout<<"char string Exception..."<<e<<endl;      // char string Exception...It's Exception
    }
    catch(const std::string& e){
        cout<<"string Exception..."<<e<<endl;           // string Exception...Exception
    }

    cout<<"Out of Try and Catch"<<endl;

    return 0;
}