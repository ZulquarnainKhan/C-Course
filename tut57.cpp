#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        double rating;
    public:
        CWH(string s  , double r){
            title = s;
            rating = r;
        }

        virtual void display(){       // If we will not make display() of Base class as virtual then whenever we run for display then we will get 'Bogus code'
            cout<<"Bogous code";
        }
};

class CWHvideo : public CWH {
    double videoLength;
    public:
        CWHvideo(string s  ,double r, double VL) : CWH(s , r) {
            videoLength = VL;
        } 
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
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
        void display(){
            cout<<"This is an amazing text tutorial with title "<<title<<endl;
            cout<<"This text course has ratings "<<rating<<"/5 "<<endl;
            cout<<"No of words in this text tutorial is "<<words<<" words"<<endl<<endl;

        } 


};

int main(){
    string title;
    double rating , videoLength;
    int words;

    // for code with harry video

    title ="Django tutorial video ";
    videoLength = 5.55;
    rating = 4.6;
    CWHvideo djangoVideo(title , rating , videoLength);
    //djangoVideo.display();        // we can also run it this way

    // for code with harry text
    title ="Django tutorial Text ";
    words = 300;
    rating = 4.1;
    CWHtext djangotext(title , rating , words);
    //djangotext.display();

    CWH *ptr[2];
    ptr[0] = &djangoVideo;
    ptr[1] = &djangotext;

    ptr[0]->display();
    ptr[1]->display();
    


    
    return 0;
}