#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};


class CWHVideo : public CWH
{
    float videolength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "This is amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of the video is: " << videolength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // For code with harry videos
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);
    // djVideo.display();

    // For code with harry text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);
    // djText.display();

    //We make 2 pointers of base class CWH
    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

// Rules for virtual function
/*
1. They can not be static
2. They are accessed by object pointer
3. virual function can be a friend of another class
4. A virtual function in base class might not be used
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
*/