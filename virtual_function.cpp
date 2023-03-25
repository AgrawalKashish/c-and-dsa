#include <iostream>
#include <string.h>
#include <string>
using namespace std;

class CWKashish
{
protected:
    float rating;
    string title;

public:
    CWKashish(string s, float r)
    {
        title = s;
        rating = r;
    }
    //  virtual void display(){}
    void display() {}
};

class CWKashishvideo : public CWKashish
{
    float video_len;

public:
    CWKashishvideo(string s, float r, float vl) : CWKashish(s, r)
    {
        video_len = vl;
    }

    void display()
    {
        cout << "This is an amazing video with  title " << title << " with rating " << rating << endl;
        cout << "Length of this video is " << video_len << endl;
    }
};
class CWKashishtext : public CWKashish
{
    int words;

public:
    CWKashishtext(string s, float r, int wc) : CWKashish(s, r)
    {
        words = wc;
    }

    void display()
    {
        cout << "This is an amazing text tutorial with  title " << title << " with rating " << rating << endl;
        cout << "Words in this tutorial is " << words << endl;
    }
};
int main()
{
    string title;
    float vlen, rating;
    int words;

    cin >> title >> rating >> vlen >> words;
    CWKashishvideo kash(title, rating, vlen);
    // kash.display();
    CWKashishtext text(title, rating, words);
    // text.display();

    CWKashish *tuts[2];
    tuts[1] = &kash;
    tuts[0] = &text;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}
/*
RULES FOR VIRTUAL FUNCTIONS
1. They cannot be static.
2. They are accessed by object pointers.
3. Virtual functions can be a friend of another class.
4. A virtual function in base class might not be used.
5. If a virtual function is defined in a base class, there is no need to define in derived class.
*/