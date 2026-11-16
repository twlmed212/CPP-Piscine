#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", "Guest", 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", target, 72, 45) {
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other) {
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
    if (this != &other) {
        this->AForm::operator=(other);
    }
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned()) {
        throw AForm::GradeTooLowException();
    }
    if (executor.getGrade() > getMinGradeToExecute()) {
        throw AForm::GradeTooLowException();
    }

    std::cout << "Drilling noises..." << std::endl;
    if (rand() % 2 == 0) {
        std::cout << getTarget() << " has been robotomized successfully!" << std::endl;
    } else {
        std::cout << "Robotomy failed on " << getTarget() << "." << std::endl;
    }
}