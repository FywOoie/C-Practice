// #ifndef 7_9.h
// #define 7_9.h

#include <string>
#include <iostream>

class Person{
public:
    Person(std::string personName, std::string personLivePlace) :
        name(personName), livePlace(personLivePlace){}
    Person() :
        name("John Doe"),livePlace("Street"){}

    std::string const getName();

    void setName(std::string);

    std::string const getLivePlace();

    void setLivePlace(std::string);

    std::istream &read(std::istream &, Person &);

    std::ostream &print(std::ostream &, const Person &);

private:
    std::string name;
    std::string livePlace;
};

std::string const Person::getName(){//最好用const，这样就可以保证不会改变变量的值
    return this->name;
}

void Person::setName(std::string name){
    this->name = name;
}

std::string const Person::getLivePlace(){
    return this->livePlace;
}

void Person::setLivePlace(std::string livePlace){
    this->livePlace = livePlace;
}

std::istream &read(std::istream &is, Person &person){
    std::string personName;
    std::string livePlace;
    is >> personName >> livePlace;
    person.setLivePlace(livePlace);
    person.setName(personName);
    return is;
}

std::ostream &print(std::ostream &os, Person person){
    os << person.getName() << " " << person.getLivePlace();
    return os;
}

//#endif