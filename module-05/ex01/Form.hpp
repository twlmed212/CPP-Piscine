#ifndef FORM_HPP
#define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Form {
    private:
        const std::string name;
        bool isSigned;
        const int minGradeToExecute;
        const int minGradeToSign;
        
    public:
        Form();
        Form(const std::string& n, int &minExecute, int& minGrade);
        ~Form();
        Form(const Form& other);
        Form& operator=(const Form& other);

        void beSigned(Bureaucrat& bureaucrat);
        const std::string& getName() const;
        bool getIsSigned() const;
        int getMinGradeToSign() const;
        int getMinGradeToExecute() const;

        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& out,
                        const Form& form);

#endif