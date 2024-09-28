try{
        string file_path = "videofile.mp4";
        if(!exists(file_path)) {
            throw VideoPlayerException("File doesn't Exist");
        }else{
            cout<<"Video is playing"<<endl;
        }
    }
    catch(exception& e){
        cout<<e.what()<<endl;
    }