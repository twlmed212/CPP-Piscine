#include "Form.hpp"


Form::Form(): name("Guest"), isSigned(false),
             minGradeToExecute(50), minGradeToSign(50) {
}

Form::Form(const std::string& n, int &minExecute, int& minGrade)
            : name(n), isSigned(false), minGradeToExecute(minExecute), 
            minGradeToSign(minGrade){
    if (minGrade < 1) {
        throw GradeTooHighException();
    }
    if (minGrade > 150){
        throw GradeTooLowException();
    }
}

Form::~Form() {
}

Form::Form(const Form& other) : name(other.name), isSigned(other.isSigned),
             minGradeToExecute(other.minGradeToExecute), minGradeToSign(other.minGradeToSign){
}

Form& Form::operator=(const Form& other){
    if (this != &other){
        isSigned = other.isSigned;
    }
    return *this;
}

void Form::beSigned( Bureaucrat& bureaucrat) {
   
    if (bureaucrat.getGrade() <= this->getMinGradeToSign()){
        isSigned = true;
    }else{
       throw GradeTooLowException();
    }
}

const std::string& Form::getName() const{
    return name;
}

bool Form::getIsSigned() const{
    return isSigned;
}

int Form::getMinGradeToSign() const {
    return minGradeToSign;
}

int Form::getMinGradeToExecute() const {
    return minGradeToExecute;
}

std::ostream& operator<<(std::ostream& out, const Form& form) {

    return out;
}

const char* Form::GradeTooHighException::what() const throw(){
    return ("Grade is too high");
}


const char* Form::GradeTooLowException::what() const throw(){
    return ("Grade is too low");
}