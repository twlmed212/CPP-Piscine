#ifndef BRAIN_HPP
#define BRAIN_HPP

# include "iostream"

class Brain {
private:
    std::string* ideas;
public:
    Brain();
    ~Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);

    std::string* getIdeas() const;
    void setIdea(int index, const std::string& idea);
};

#endif