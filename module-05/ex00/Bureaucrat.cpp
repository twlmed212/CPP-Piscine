#include "Bureaucrat.hpp"

# include <iostream>

Bureaucrat::Bureaucrat(): name("Guest"), grade (0){
    std::cout << "TEST";
}

Bureaucrat::Bureaucrat(std::string nm, 
                        int grd) : name(nm), grade (grd){}

Bureaucrat::~Bureaucrat(){
    
}

Bureaucrat::Bureaucrat(const Bureaucrat& other): name(other.name), grade(other.grade){
    
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	if (this != &other){
		grade = other.grade;
	}
	return *this;
}

const std::string& Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const{
    return grade;
}

void Bureaucrat::increamentGrade(){
    if (grade == 1) {
        throw Bureaucrat::GradeTooHighException;
    }
    --grade;
    // success increment
}

void Bureaucrat::decrementGrade(){
    if (grade == 150) {
        throw Bureaucrat::GradeTooLowException;
    }
    ++grade;
    // success decrement
}