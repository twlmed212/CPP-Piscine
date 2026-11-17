#ifndef INTERN_HPP
#define INTERN_HPP

# include <iostream>

class Intern {
    // private:
    //     const std::string name;
    //     const std::string target;
    //     const int minGradeToSign;
    //     const int minGradeToExecute;
    //     bool isSigned;
    //     virtual void executeAction() const = 0;
    
    public:
        Intern();
        Intern(const std::string& n, const std::string& target);
        virtual ~Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);

        void beSigned(const Bureaucrat& bureaucrat);
        const std::string& getName() const;
        bool getIsSigned() const;
        int getMinGradeToSign() const;
        int getMinGradeToExecute() const;
        const std::string& getTarget() const;

        void execute(const Bureaucrat& executor) const;
        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };

        class FormNotSignedException : public std::exception {
            public:
                const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& out,
                        const Intern& Intern);

#endif