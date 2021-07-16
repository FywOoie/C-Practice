//#ifndef 7_23.h
//#define 7_23.h

#include <string>

class Screen{
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), content(ht * wd, c){}

    char get() const{
        return content[cursor];//?
    }
    char get(pos r, pos c) const;
    Screen &move(pos r, pos c);
private:
    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    std::string content;
    mutable size_t access_ctr;
};

char Screen::get(pos r, pos c) const{
    pos row = r*width;
    return content[row+c];
}

Screen& Screen::move(pos r, pos c){
    ++access_ctr;
    pos row = r * width;
    cursor = row + c;
    return *this;
}
//#endif