//#ifndef 7_23.h
//#define 7_23.h

#include <string>

class Screen{
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), content(ht * wd,' '){}
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), content(ht * wd, c){}

    char get() const{
        return content[cursor];//?
    }
    char get(pos r, pos c) const;//重载函数

    Screen move(pos r, pos c);
    Screen set(char);
    Screen set(pos, pos, char);

    Screen display(std::ostream &os){
        do_display(os);
        return *this;
    }

    const Screen display(std::ostream &os) const {
        do_display(os);
        return *this;
    }

private:
    pos cursor = 0;
    pos height = 0;
    pos width = 0;
    std::string content;
    mutable size_t access_ctr;

    void do_display(std::ostream &os) const{
        os << content;
    }
};

char Screen::get(pos r, pos c) const{
    pos row = r*width;
    return content[row+c];
}

Screen Screen::move(pos r, pos c){
    ++access_ctr;
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline Screen Screen::set(char c){
    content[cursor] = c;
    return *this;
}

inline Screen Screen::set(pos r, pos col, char ch){
    content[r*width + col] = ch;
    return *this;
}
//#endif