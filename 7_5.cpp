#include <string>

class Person{
public:
    Person();
    Person(std::string personName, std::string personLivePlace) :
        name(personName), livePlace(personLivePlace){}

    std::string const getName();

    std::string const getLivePlace();

private:
    std::string name;
    std::string livePlace;
};

std::string const Person::getName(){//最好用const，这样就可以保证不会改变变量的值
    return this->name;
}

std::string const Person::getLivePlace(){
    return this->livePlace;
}

int main(){
    return 0;
}