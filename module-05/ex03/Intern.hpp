#ifndef INTERN_HPP
#define INTERN_HPP

# include <string>
# include <exception>

class AForm;

class Intern {
    public:
        Intern();
        Intern(const Intern& other);
        Intern& operator=(const Intern& other);
        ~Intern();

        AForm* makeForm(const std::string& name, const std::string& target) const;
        class UnknownFormException : public std::exception {
            public:
                const char* what() const throw();
        };
    private:
        AForm* createShrubbery(const std::string& target) const;
        AForm* createRobotomy(const std::string& target) const;
        AForm* createPardon(const std::string& target) const;
};
#endif