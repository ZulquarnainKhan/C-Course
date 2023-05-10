#include<iostream>
#include<cstring>
using namespace std;

//------------------ ABSTRACT BASE CLASS & PURE VIRTUAL FUNCTION ---------------------
// Abstract base class is a base class which has atleast 1 pure virtual function
// Pure virtual function is a function that has syntax as
//          'void func_name() = 0;'

class CWH{
    protected:
        string title;
        double rating;
    public:
        CWH(string s  , double r){
            title = s;
            rating = r;
        }

        virtual void display() = 0;  // This is known as 'Do-nothing function' or 'Pure Virtual Function'     
                                // This will force us to make a dedicated display() function in derived class otherwise it will throw an error
        
};

class CWHvideo : public CWH {
    double videoLength;
    public:
        CWHvideo(string s  ,double r, double VL) : CWH(s , r) {
            videoLength = VL;
        } 
        void display(){
            cout<<endl<<"This is an amazing video with title "<<title<<endl;
            cout<<"This video has ratings "<<rating<<"/5 "<<endl;
            cout<<"Length of this video is "<<videoLength<<" minutes"<<endl<<endl;
        }


};

class CWHtext : public CWH {
    int words;
    public:
        CWHtext(string s  , double r, int w) : CWH(s , r) {
            words = w;
        }
        void display(){                                                        // If we remove display() from derived class then even after making-
            cout<<"This is an amazing text tutorial with title "<<title<<endl; //-base class display() as virtual function, it will still run  
            cout<<"This text course has ratings "<<rating<<"/5 "<<endl;        // But if we make base dispaly as pure virtual then we get an error
            cout<<"No of words in this text tutorial is "<<words<<" words"<<endl<<endl;

        } 


};

int main(){
    string title;
    double rating , videoLength;
    int words;

    // for code with harry video

    title ="Django tutorial video ";
    videoLength = 12.06;
    rating = 4.87;
    CWHvideo djangoVideo(title , rating , videoLength);
    //djangoVideo.display();        // we can also run it this way

    // for code with harry text
    title ="Django tutorial Text ";
    words = 300;
    rating = 4.01;
    CWHtext djangotext(title , rating , words);
    //djangotext.display();

    CWH *ptr[2];
    ptr[0] = &djangoVideo;
    ptr[1] = &djangotext;

    ptr[0]->display();
    ptr[1]->display();
    


    
    return 0;
}