#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(const Brain &origin);
	~Brain();

	Brain &operator=(const Brain &original);
	void setIdea(std::string idea, int i);
	std::string getIdea(int i) const;
};

#endif