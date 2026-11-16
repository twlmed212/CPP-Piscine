#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm(): name("Guest"), target("Guest"),
        minGradeToSign(50), minGradeToExecute(50), isSigned(false){
}
//        AForm(const std::string& n, const std::string& target, const int gradeToSign, const int gradeToExecute);

AForm::AForm(const std::string& n, const std::string& target,
            const int gradeToSign, const int gradeToExecute)
            : name(n), target(target), minGradeToSign(gradeToSign), 
            minGradeToExecute(gradeToExecute), isSigned(false) {
    if (gradeToSign < 1 || gradeToExecute < 1) {
        throw GradeTooHighException();
    }
    if (gradeToSign > 150 || gradeToExecute > 150){
        throw GradeTooLowException();
    }
}

AForm::~AForm() {
}

AForm::AForm(const AForm& other) : name(other.name), target(other.target), 
        minGradeToSign(other.minGradeToSign), minGradeToExecute(other.minGradeToExecute),
        isSigned(other.isSigned) {
}

AForm& AForm::operator=(const AForm& other){
    if (this != &other){
        isSigned = other.isSigned;
    }
    return *this;
}

void AForm::beSigned(const Bureaucrat& bureaucrat) {
   
    if (bureaucrat.getGrade() <= this->getMinGradeToSign()){
        isSigned = true;
    }else{
       throw GradeTooLowException();
    }
}

const std::string& AForm::getName() const{
    return name;
}

bool AForm::getIsSigned() const{

    return isSigned;
}

int AForm::getMinGradeToSign() const {
    return minGradeToSign;
}

int AForm::getMinGradeToExecute() const {
    return minGradeToExecute;
}

const std::string& AForm::getTarget() const {
    return target;
}

std::ostream& operator<<(std::ostream& out, const AForm& Aform) {
    out << Aform.getName() << " (Signed: " 
        << (Aform.getIsSigned() ? "Yes" : "No")
        << ", Grade required to Sign: " 
        << Aform.getMinGradeToSign() 
        << ", Min Grade to Execute: " 
        << Aform.getMinGradeToExecute() << ")";
    return out;
}

const char* AForm::GradeTooHighException::what() const throw(){
    return ("Grade is too high");
}


const char* AForm::GradeTooLowException::what() const throw(){
    return ("Grade is too low");
}