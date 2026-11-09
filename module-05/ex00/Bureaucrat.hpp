#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

# include <string>

class Bureaucrat {
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string nm, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);

        const std::string& getName() const;
        int getGrade() const;

        void increamentGrade();
        void decrementGrade();

        class GradeTooHighException : public std::exception {
            public:
               const char* what() const throw() {
                    return ("Our Costumer TooHigh Exception");
               }
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw() {
                    return ("Our Costum TooLow Exception");
                }
        };

};


#endif