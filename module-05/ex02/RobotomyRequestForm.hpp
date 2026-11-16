// RobotomyRequestForm
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include <cstdlib>

class RobotomyRequestForm : public AForm {

public:
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string& target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm& other);
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

    void execute(const Bureaucrat& executor) const;
};

#endif