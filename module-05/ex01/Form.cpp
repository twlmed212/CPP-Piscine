#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(): name("Guest"), minGradeToSign(50),
            minGradeToExecute(50), isSigned(false) {
}

Form::Form(const std::string& n, int gradeToSign, int gradeToExecute)
            : name(n),  minGradeToSign(gradeToSign), minGradeToExecute(gradeToExecute), isSigned(false){
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw GradeTooHighException();
    }
    if (gradeToSign > 150 || gradeToExecute > 150){
        throw GradeTooLowException();
    }
}

Form::~Form() {
}

Form::Form(const Form& other) : name(other.name), minGradeToSign(other.minGradeToSign),
                                minGradeToExecute(other.minGradeToExecute), isSigned(other.isSigned){
}

Form& Form::operator=(const Form& other){
    if (this != &other){
        isSigned = other.isSigned;
    }
    return *this;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
   
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
    out << form.getName() << " (Signed: " 
        << (form.getIsSigned() ? "Yes" : "No")
        << ", Grade required to Sign: " 
        << form.getMinGradeToSign() 
        << ", Grade required to Execute: " 
        << form.getMinGradeToExecute() << ")";
    return out;
}

const char* Form::GradeTooHighException::what() const throw(){
    return ("Grade is too high");
}


const char* Form::GradeTooLowException::what() const throw(){
    return ("Grade is too low");
}