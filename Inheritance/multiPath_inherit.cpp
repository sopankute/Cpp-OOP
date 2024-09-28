#include<iostream>
using namespace std;

// Heirarchical + Multiple = Hybrid (Human -> Rupesh(2 times of Human))

class Human{
    public :
        Human(){
            cout<<"Human Breathing..."<<endl;
        }
        void drink(){
            cout<<"Human drink water..."<<endl;
        }
};
class Youtuber : public virtual Human{
    public :
        Youtuber(){
            cout<<"youtuber Creating Videos..."<<endl;
        }
};
class Engineer : public virtual Human{
    public :
        Engineer(){
            cout<<"engineer Making Machine..."<<endl;
        }
};
class Abhishek : public Youtuber, public Engineer{
    public :
        Abhishek(){
            cout<<"he is youtuber and engineer..."<<endl;
        }
};

int main(){
    Abhishek obj;

// without *virtual* 
    // Human Breathing...
    // youtuber Creating Videos...
    // Human Breathing...
    // engineer Making Machine...
    // he is youtuber and engineer...

    // obj.drink();    // ambiguous error 

// With *virtual* 
    // Human Breathing...
    // youtuber Creating Videos...
    // engineer Making Machine...
    // he is youtuber and engineer...
    
    obj.drink();    // Human drink water...
    
    return 0;

}
