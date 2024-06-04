#include<iostream>
using namespace std;

class CWH{
     protected: 
       string title;
       float rating;
    public:
       CWH(string s,float r)
       {
        title = s;
        rating = r;
       } 
       virtual void display()=0; // do-nothing function --> pure virtual function , if we comment out any derived class display then it throw error
       
};

class CWHVideo : public CWH{
     int videolength;
     public:
         CWHVideo(string s, float r, int vl) : CWH(s, r) {
            videolength = vl;
         } 

         void display()
         {
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videolength<<" minutes"<<endl;
         }
};

class CWHText : public CWH{
     int words;
     public:
         CWHText(string s, float r, int wc) : CWH(s, r) {
           words = wc;
         } 

         void display()
         {
            cout<<"This is an amazing text tutorial with title "<<title<<endl;
            cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
            cout<<"No. of words in this text tutorial is: "<<words<<" words"<<endl;

         }
};

int main()
{
    string title;
    float rating, vlen;
    int words;
    title = "Django tutorial";
    vlen = 4.54;
    rating = 3.9;
    CWHVideo djVideo(title, rating, vlen);
    djVideo.display();

    //for code with harry text
    title = "Django tutorial Text";
    words = 498;
    rating = 4.11;
    CWHText djText(title, rating, words);
    djText.display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}


// in abstract function there is one pure virtual function
//abstract class is that class which is made to make derived class necessary which is not necessary for virtaul but necessary
//for pure virtual