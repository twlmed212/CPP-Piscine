#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", "default", 145, 137) {

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm(target, target, 145, 137) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other) {
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
    if (this != &other) {
        this->AForm::operator=(other);
    }
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
    if (!getIsSigned()) {
        throw AForm::GradeTooLowException();
    }
    if (executor.getGrade() > getMinGradeToExecute()) {
        throw AForm::GradeTooLowException();
    }

    std::ofstream outfile((getTarget() + "_shrubbery").c_str());
    if (!outfile) {
        std::cerr << "Error creating file." << std::endl;
        return;
    }
    outfile << "          # #### ####" << std::endl;
    outfile << "        ### \\/#|### |/####" << std::endl;
    outfile << "       ##\\/#/ \\||/##/_/##/_#" << std::endl;
    outfile << "     ###  \\/###|/ \\/ # ###" << std::endl;
    outfile << "   ##_\\_#\\_\\## | #/###_/_####" << std::endl;
    outfile << "  ## #### # \\ #| /  #### ##/##" << std::endl;
    outfile << "   __#_--###`  |{,###---###-~" << std::endl;
    outfile << "             \\ }{" << std::endl;
    outfile << "              }}{" << std::endl;
    outfile << "              }}{" << std::endl;
    outfile << "              }}{" << std::endl;
    outfile << "              }}{" << std::endl;
    outfile << "              {{}" << std::endl;

    outfile.close();
}