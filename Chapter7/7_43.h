class NoDefault{
public:
    NoDefault(int);

};

class C{
public:
    C() : noDefault(0){}

private:
    NoDefault noDefault;
};