#ifndef NUM_HPP
#define NUM_HPP

# include <iostream>

class num {
private:
    int number;
public:
    num();
    num(int number);
    ~num();
    num(const num& other);
    num& operator=(const num& other);// change obj so return reference

    int toInteger() const;
    void setNumber(int n);
    num& operator+=(const num& other);// change obj, return ref
    num& operator-=(const num& othre);// same 


    num operator+(const num& other) const ;// const no obj changed
    num operator-(const num& other) const ;// const no obj changed

    num operator+() const;// const no obj changed
    num operator-() const;// const no obj changed
    // prefix ++ ex : ++x
    num& operator--();// here we return the ref, cause we make change and we need to use it
    // postfix ++ ex: x++
    num operator--(int);
    num& operator++() ; // prefix
    num operator++(int); // postfix
    bool operator==(const num&other) const;
    bool operator<(const num&other) const;
    bool operator>(const num&other) const;
    
};

std::ostream&  operator<<( std::ostream& out,const num& other);
#endif
