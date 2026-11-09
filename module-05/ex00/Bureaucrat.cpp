#include "Bureaucrat.hpp"

# include <iostream>

Bureaucrat::Bureaucrat(): name("Guest"), grade (1){
}

Bureaucrat::Bureaucrat(const std::string& nm, 
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

const char*  Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade is too high\n");
}

const char*  Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is too low\n");
}


void Bureaucrat::incrementGrade(){
    if (grade == 1) {
        throw Bureaucrat::GradeTooHighException();
    }
    --grade;
}

void Bureaucrat::decrementGrade(){
    if (grade == 150) {
        throw Bureaucrat::GradeTooLowException();
    }
    ++grade;
}