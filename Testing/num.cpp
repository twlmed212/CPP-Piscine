#include "num.hpp"
#include <string>

num::num() : number(0){
}

num::num(int number): number(number){
}
num::~num(){}
num::num(const num& other){
    number = other.toInteger();
}

num& num::operator=(const num& other){
    if (this != &other){
        number = other.toInteger();
    }
    return (*this);
}

int num::toInteger() const{
    return (number);
}
void num::setNumber(int n){
    this->number = n;
}
num& num::operator+=(const num& other){
    this->setNumber(this->toInteger() + other.toInteger());
    return (*this);
}

num& num::operator-=(const num& other){
    this->setNumber(this->toInteger() - other.toInteger());
    return (*this);

} 

num num::operator+() const {
    return (num(+number));

}
num num::operator-() const {
    return (num(-number));
}

num num::operator+(const num& other) const {
    num x(number + other.toInteger());
    return x;

}
num num::operator-(const num& other) const  {
    num x(number - other.toInteger());
    return x;
}
// prefix ++ ex : ++x
num& num::operator--(){
    --this->number;
    return (*this);
}// here we return the ref, cause we make change and we need to use it
// postfix ++ ex: x++
num num::operator--(int) {
    num x(*this);
    this->number--;
    return (x);
}
num& num::operator++(){
    ++this->number;
    return *this;
}
num num::operator++(int) {
    num x(*this);
    this->number++;
    return (x);
}
bool num::operator==(const num&other) const{
    if (&other == this){
        return (true);
    }
    if (this->number == other.toInteger()){
        return true;
    }
    return false;
}
bool num::operator<(const num&other) const{
    if (this->number  < other.toInteger()){
        return true;
    }
    return false;
}
bool num::operator>(const num&other) const{
    if (this->number  > other.toInteger()){
        return true;
    }
    return false;
}
std::ostream&  operator<<( std::ostream& out,const num& other){
    out << other.toInteger();
    return out;
}