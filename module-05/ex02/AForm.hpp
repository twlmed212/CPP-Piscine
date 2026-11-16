#ifndef AFORM_HPP
#define AFORM_HPP

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat;

class AForm {
    private:
        const std::string name;
        const std::string target;
        const int minGradeToSign;
        const int minGradeToExecute;
        bool isSigned;
    
    public:
        AForm();
        AForm(const std::string& n, const std::string& target, const int gradeToSign, const int gradeToExecute);
        virtual ~AForm();
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);

        void beSigned(const Bureaucrat& bureaucrat);
        const std::string& getName() const;
        bool getIsSigned() const;
        int getMinGradeToSign() const;
        int getMinGradeToExecute() const;
        const std::string& getTarget() const;

        virtual void execute(const Bureaucrat& executor) const = 0;
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
                        const AForm& Aform);

#endif