#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", "Guest", 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", target, 25, 5) {
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other) {


}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
    if (this != &other) {
        this->AForm::operator=(other);
    }
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned()) {
        throw AForm::GradeTooLowException();
    }
    if (executor.getGrade() > getMinGradeToExecute()) {
        throw AForm::GradeTooLowException();
    }

    std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}