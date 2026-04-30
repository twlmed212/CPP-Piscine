#ifndef OCF_HPP
#define OCF_HPP

# include <iostream>


class Car {
    public:
        int x;
        int* y;
        Car();
        Car(const Car& src);
        ~Car();
        Car& operator=(const Car& other);
};

#endif