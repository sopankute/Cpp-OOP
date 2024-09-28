
// User defined Exception 
// 1. code Readability
// 2. Better Error handling
// 3. Modularity 
// 4. Reusability

#include<iostream>
#include<filesystem>
#include<fstream>
using namespace std;
using namespace std::filesystem;

class VideoPlayerException : public exception{
    const char* error_msg;
public : 
    VideoPlayerException(const char* msg):error_msg{msg}{}
    const char* what(){
        return error_msg;
    }
};
int main(){

    try{
        string file_path = "videofile.mp4";
        if(!fs::exists(file_path)) {
            throw VideoPlayerException("File doesn't Exist");
        }else{
            cout<<"Video is playing"<<endl;
        }
    }
    catch(exception& e){
        cout<<e.what()<<endl;
    }

    return 0;

}