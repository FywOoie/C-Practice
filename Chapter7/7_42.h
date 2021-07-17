#include <string>
#include <vector>

class Leaf{
    Color changeColor();
    void fall();
};

class Root{
    std::string rootType = "regular";
};

class Color{
    std::string brown = "brown";
    std::string black = "black";
};

class Cause{
    std::string die_of_age;
    std::string die_of_diaster;
    std::string die_of_people_acitivity;
};

class Tree{
public:
    Tree(std::string ty, int ht) : treeType(ty), age(0), height(ht){}
    Tree() : Tree("default", 0.2){}
    //getters and setters

private:

    std::string treeType;
    std::vector<Leaf> leafs;
    int age;
    Root root;
    double height;

    void grow();
    void die(Cause cause);
};