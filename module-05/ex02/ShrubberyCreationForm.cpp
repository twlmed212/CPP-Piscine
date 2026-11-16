#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", "default", 145, 137) {

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", target, 145, 137) {
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

void ShrubberyCreationForm::executeAction() const {
    std::ofstream outfile((getTarget() + "_shrubbery").c_str());
    if (!outfile) {
        throw FileCreationException();
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
const char* ShrubberyCreationForm::FileCreationException::what() const throw() {
    return ("Error creating file");
}