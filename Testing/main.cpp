#include <string>
#include <iostream>
#include "num.hpp"

num::num() : number(0){
}

num::num(int number): number(number){
}
num::~num(){}
num::num(const num& other){
    number = other.number;
}

num& num::operator=(const num& other){
    if (this != &other){
        number = other.number;
    }
    return (*this);
}
num& num::operator+=(const num& other){
    this->number += other.number;
    return (*this);
}

num& num::operator-=(const num& other){
    this->number -= other.number;
    return (*this);

} 

num num::operator+() {
    return (num(+number));

}
num num::operator-()  {
    return (num(-number));
}

num num::operator+(const num& other) const {
    num x(number + other.number);
    return x;

}
num num::operator-(const num& other) const  {
    num x(number - other.number);
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
    if (this->number == other.number){
        return true;
    }
    return false;
}
bool num::operator<(const num&other) const{
    if (this->number  < other.number){
        return true;
    }
    return false;
}
bool num::operator>(const num&other) const{
    if (this->number  > other.number){
        return true;
    }
    return false;
}
std::ostream&  operator<<( std::ostream& out,const num& other){
    out << other.number;
    return out;
}

int main() {
    num a(10);
    num c(20);
    ++a;            // error: no match for 'operator++'
    c + a;          // error: passing 'const num' as 'this' discards qualifiers
    -a;             // error: no match for 'operator-'
    std::cout << +a << std::endl;
    std::cout << -a << std::endl;
    std::cout << c + a; // error: no match for 'operator<<'
    return 0;
}